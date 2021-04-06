import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.12


Page{

    Connections{
        target: bridge
        function onSetComboBoxModel(model) {
            combobox.model = model;
        }
        function onSetConsoleText(text) {
            textConsole.text = qsTr(text);
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
    FormulaDialog{
        id: exceptionDialog
        color: "#962726"
        iconSource: "images/icon_error.svg"
    }
    FormulaDialog{
        id: sucessDialog
        color: "#252525"
        iconSource: "images/icon_success.svg"
    }

    Rectangle{
        color: "#181818"
        anchors.fill: parent
        id: pageRect
        property alias text1: textConsole.text

        Rectangle{
            color: "#181818"
            anchors.horizontalCenter: parent.horizontalCenter
            width: parent.width*0.95
            height: parent.height*0.95

                Row{
                    spacing: parent.width * 0.02
                    anchors.fill: parent
                    RoundComponent{
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_console.svg"
                        iconWidth: 36
                        iconHeight: 32.4
                        text: "Console"
                    
                            Rectangle{
                                color: "#00000000"
                                width: parent.width * 0.9
                                height: parent.height * 0.1
                                
                                anchors.horizontalCenter: parent.horizontalCenter
                                anchors.top: parent.top
                                anchors.topMargin: parent.height * 0.03
                                Row{
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    anchors.verticalCenter: parent.verticalCenter
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

                            }
                            Rectangle{
                                anchors.horizontalCenter: parent.horizontalCenter
                                anchors.bottom: parent.bottom
                                anchors.bottomMargin: parent.height * 0.05
                                width: parent.width * 0.9
                                height: parent.height * 0.8
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
                            }
                        
                    }
                    
                    RoundComponent{
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_debug.svg"
                        iconWidth: 36
                        iconHeight: 36
                        text: "Debug"
                    }
                }
            
        }
    }
    

    
}
