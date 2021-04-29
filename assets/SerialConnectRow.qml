import QtQuick 2.14
import QtQuick.Controls 2.14


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

            if (text == "Conectado com sucesso"){
                connectButton.enabled = false;
                disconnectButton.enabled = true;
            } else if (text == "Desconectado com sucesso"){
                connectButton.enabled = true;
                disconnectButton.enabled = false;
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
                bridge.connectSerial(combobox.currentText);
                
            }
        }
        Button{
            id: disconnectButton   
            enabled: false                                     
            text:"Desconectar"
            onClicked: {
                bridge.disconnectSerial()
            }
        }
    }