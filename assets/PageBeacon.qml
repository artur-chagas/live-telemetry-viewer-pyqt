import QtQuick 2.14
import QtQuick.Controls 2.14


Page{
    Rectangle{
        color: "#181818"
        anchors.fill: parent
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
                                        width: parent.width * 0.3
                                    }
                                    Button{
                                        text:"Buscar"
                                        enabled:true
                                        onClicked: bridge.getSerialPorts()
                                    }
                                    Button{
                                        text:"Conectar"
                                        onClicked: bridge.connectSerial(combobox.currentText)
                                    }
                                    Button{
                                        text:"Desconectar"
                                        onClicked: bridge.disconnectSerial()
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
                                        TextArea{
                                            id: textarea
                                            readOnly: true
                                            anchors.left: parent.left
                                            anchors.leftMargin: 0.03*width
                                            placeholderText: qsTr("a\na\na\n")
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
    

    Connections{
        target: bridge
        function onSetComboBoxModel(model) {
            combobox.model = model
        }
    }
}
