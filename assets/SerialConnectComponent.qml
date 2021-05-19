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
                    connectionIndicator.visible = true;
                    connectionIndicator.children[0].text = "CONECTADO A " + port;
                } else if (text == port + " desconectado com sucesso"){
                    connectButton.enabled = true;
                    disconnectButton.enabled = false;
                    connectionIndicator.visible = false;
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
                    print(port);
                    bridge.disconnectSerial(port);
                }
            }
    }

    Rectangle{
        anchors.horizontalCenter: parent.parent.horizontalCenter
        anchors.bottom: parent.parent.bottom
        anchors.bottomMargin: parent.parent.height * 0.05
        width: parent.parent.width * 0.9
        height: parent.parent.height * 0.75
        radius: 16
        clip: true
        
        ScrollView{
            anchors.fill: parent
                Text{
                    id: textConsole
                    height: 500
                    anchors.left: parent.left
                    anchors.leftMargin: 10
                    anchors.rightMargin: 10
                }
        }
        Button{
            anchors.bottom: parent.bottom
            text: "Limpar tela"
            onClicked: {
                textConsole.text = "";
                bridge.clearSerialString();
            }
        }
    }
    
}