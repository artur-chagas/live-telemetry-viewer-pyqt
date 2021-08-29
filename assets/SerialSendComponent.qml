import QtQuick 2.14
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.14
import QtQuick.Dialogs 1.0


Column{
    property string port: ""
    // width: parent.width * 0.9
    // height: parent.height * 0.3
    
    // anchors.horizontalCenter: parent.horizontalCenter
    anchors.top: parent.top
    anchors.topMargin: parent.height * 0.04
    Rectangle{
        id: connectionIndicator
        height:childrenRect.height
        width:parent.width
        visible:false
        color:"#fed700"
        radius: 2
        Text{
            width: parent.width
            anchors.horizontalCenter: parent.horizontalCenter
            font.pointSize: 12
            color: "#000000"
        }
    }

    FormulaDialog{
        id: exceptionDialog
        color: "#962726"
        iconSource: "images/icon_error.svg"
        pointSize: 8
    }
    FormulaDialog{
        id: sucessDialog
        color: "#252525"
        iconSource: "images/icon_success.svg"
        pointSize: 8
    }
    FileDialog{
        id: fileDialog
        title: "Escolha um arquivo .SD"
        defaultSuffix: ".SD"
        nameFilters: ["LOG (*.SD *.sd)"]
        selectFolder: false
        selectMultiple: false
        onAccepted: {
            var name = fileUrl.toString();
            name = name.slice(name.lastIndexOf("/")+1);
            fileIndicator.text = name;
            fieldComment.text = name;
        }
    }

    Rectangle{
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width
        height: childrenRect.height
        color: "#181818"
        Rectangle{
            id:fileIndicatorRect
            width: parent.width*0.8
            height:childrenRect.height*1.2
            radius:8
            anchors.left: parent.left
            anchors.verticalCenter: parent.verticalCenter
            color: "#202020"
            Text{
                id:fileIndicator
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
                font.pointSize: 15
                color: "#ffffff"
                text: "Nenhum arquivo selecionado"
            }
        }
        Button{
            anchors.left: fileIndicatorRect.right
            width: parent.width*0.1
            icon.source: "images/icon_folder.svg"
            icon.color: "#fed700"
            onClicked: fileDialog.open()
        }
        Button{
            anchors.right: parent.right
            width: parent.width*0.1
            icon.source: "images/icon_play.svg"
            icon.color: enabled ? "#fed700" : "#505050"
            enabled: fileDialog.fileUrl != "" && port != ""
            onClicked: bridge.startPlayLog(port, fileDialog.fileUrl.toString(), fieldPeriod.text)
        }
    }

    Row{
        Connections{
            target: bridge
            function onSetComboBoxModel(model) {
                combobox.model = model;
            }

            function onCallExceptionDialog(text) {
                print("ExceptionDialog:" + text);
                exceptionDialog.text = text;
                exceptionDialog.open();

            }
            function onCallSuccessDialog(text) {
                print("SuccessDialog:" + text);
                sucessDialog.text = text
                sucessDialog.open();
                print(port)
                if (text == port + " conectado com sucesso"){
                    connectButton.enabled = false;
                    disconnectButton.enabled = true;
                    searchButton.enabled = false;
                    connectionIndicator.visible = true;
                    connectionIndicator.children[0].text = "CONECTADO A " + port;
                    combobox.enabled = false;
                } else if (text == port + " desconectado com sucesso"){
                    connectButton.enabled = true;
                    disconnectButton.enabled = false;
                    searchButton.enabled = true;
                    connectionIndicator.visible = false;
                    combobox.enabled = true;
                }
            }
        }

            spacing: width * 0.025
            ComboBox{
                Component.onCompleted: bridge.getSerialPorts()
                id:combobox
                width: parent.width * 0.3
            }
            Button{
                id:searchButton
                text:"Buscar"
                onClicked: {
                    searchButton.enabled = false;
                    searchTimer.start()
                    
                }

                Timer{
                    id: searchTimer
                    interval: 500
                    onTriggered: {
                        bridge.getSerialPorts()
                        searchButton.enabled = true
                    }
                }

            }
            Button{
                id: connectButton                                        
                text:"Conectar"
                onClicked: {
                    port = combobox.currentText.split(" ")[0];
                    bridge.connectSerial(port);
                }
            }
            Button{
                id: disconnectButton   
                enabled: false                                     
                text:"Desconectar"
                onClicked: {
                    port = combobox.currentText.split(" ")[0];
                    bridge.disconnectSerial(port);
                    port = ""
                }
            }
            Column{
                Layout.alignment: Qt.AlignHCenter
                Text{
                    font.pointSize: 8
                    text: "Período (ms)"
                    color: "#ffffff"
                }
                TextField{
                    id: fieldPeriod
                    validator: IntValidator {bottom: 1; top: 5000;}
                    text: "10"
                }
            } 
            
}

    
    // Rectangle{
    //     id: consoleRect
    //     anchors.horizontalCenter: parent.parent.horizontalCenter
    //     anchors.bottom: parent.parent.bottom
    //     anchors.bottomMargin: parent.parent.height * 0.05
    //     width: parent.parent.width * 0.9
    //     height: parent.parent.height * 0.75
    //     radius: 16
    //     clip: true
        
    //     ScrollView{
    //         anchors.fill: parent
    //         contentWidth: textArea.width
    //             TextEdit{
    //                 id: textArea
    //                 width: consoleRect.width*0.9
    //                 height: consoleRect.height*0.9
    //                 anchors.left: parent.left
    //                 anchors.leftMargin: consoleRect.width*0.05
    //                 anchors.rightMargin: consoleRect.width*0.05
    //                 wrapMode: Text.WrapAnywhere
    //                 color: "#000000"
    //             }
    //     }
        
        
    
    
}