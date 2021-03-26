import QtQuick 2.14
import QtQuick.Controls 2.14


Page{

    Connections{
        target: bridge_beacon
        function onSetComboBoxModel(model) {
            combobox.model = model
        }
        function onSetConsoleText(text) {
            textConsole.text += qsTr(text)
        }
        
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
                                        Component.onCompleted: bridge_beacon.getSerialPorts()
                                        id:combobox
                                        width: parent.width * 0.3
                                    }
                                    Button{
                                        text:"Buscar"
                                        enabled:true
                                        onClicked: bridge_beacon.getSerialPorts()
                                    }
                                    Button{
                                        text:"Conectar"
                                        Timer{
                                            id: timer
                                            interval: 500; running: false; repeat: true
                                            onTriggered: {
                                                bridge_beacon.getSerialString()
                                            }
                                        }
                                        onClicked: {
                                            bridge_beacon.connectSerial(combobox.currentText);
                                            timer.running = true;
                                        }
                                    }
                                    Button{
                                        text:"Desconectar"
                                        onClicked: {
                                            bridge_beacon.disconnectSerial()
                                            timer.running = false;
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
                                    ScrollView{
                                    anchors.fill: parent
                                        Text{
                                            id: textConsole
                                            height: 500
                                            anchors.left: parent.left
                                            anchors.leftMargin: 0.03*width
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
