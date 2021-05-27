import QtQuick 2.14
import QtQuick.Controls 2.14

Column{
    property string port: ""
    property alias textConsole: textConsole
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
                width: parent.width * 0.4
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
    }

    Rectangle{
        id: consoleRect
        anchors.horizontalCenter: parent.parent.horizontalCenter
        anchors.bottom: parent.parent.bottom
        anchors.bottomMargin: parent.parent.height * 0.05
        width: parent.parent.width * 0.9
        height: parent.parent.height * 0.75
        radius: 16
        clip: true
        
        ScrollView{
            anchors.fill: parent
            contentWidth: textConsole.width
                Text{
                    id: textConsole
                    width: consoleRect.width*0.9
                    height: consoleRect.height*0.9
                    anchors.left: parent.left
                    anchors.leftMargin: consoleRect.width*0.05
                    anchors.rightMargin: consoleRect.width*0.05
                    wrapMode: Text.WrapAnywhere
                }
        }
        Button{
            anchors.bottom: parent.bottom
            text: "Limpar tela"
            onClicked: {
                textConsole.text = "";
                bridge.clearSerialString(port);
            }
        }
    }
    
}