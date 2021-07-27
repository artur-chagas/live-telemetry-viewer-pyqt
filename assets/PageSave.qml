import QtQuick 2.14
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.14
import QtQuick.Controls 1.4 as QQC1
import QtQuick.Controls.Styles 1.3
import QtQuick.Dialogs 1.0

Page{
    Connections{
        target: bridge
        function onSetConsoleText(text, port) {
            if (port == receptorSRC.port){
                receptorSRC.textConsole.text += qsTr(text);
                print(text);
                bridge.updateComponents(text);
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
    FileDialog{
        id: fileDialog
        title: "Escolha um arquivo .SD"
        defaultSuffix: ".SD"
        //fileUrl: url
        //fileUrls: list<url>
        //modality: Qt: : WindowModality
        nameFilters: ["LOG (*.SD *.sd)"]
        //selectExisting: bool
        selectFolder: false
        selectMultiple: false
        //selectedNameFilter: string
        //shortcuts: Object
        //sidebarVisible: bool
        //visible: bool
        onAccepted: {
            var name = fileUrl.toString();
            name = name.slice(name.lastIndexOf("/")+1);
            fileIndicator.text = name;
        }
    }


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
                        text: "Salvar Log"
                        Rectangle{
                            color: "#181818"
                            width: parent.width*0.95
                            height: parent.height*0.95
                            anchors.top: parent.top
                            anchors.topMargin: parent.height * 0.04
                            anchors.horizontalCenter: parent.horizontalCenter
                            Column{
                                width: parent.width
                                anchors.horizontalCenter: parent.horizontalCenter
                                spacing: 20
                                Column{
                                    width: parent.width
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    Rectangle{
                                        anchors.horizontalCenter: parent.horizontalCenter
                                        width: parent.width*0.8
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
                                            enabled: false
                                            anchors.right: parent.right
                                            width: parent.width*0.1
                                            icon.source: "images/icon_save.svg"
                                            icon.color: enabled ? "#fed700" : "#505050"
                                        }
                                    }
                                    QQC1.ProgressBar{
                                        anchors.horizontalCenter: parent.horizontalCenter
                                        width: parent.width*0.8
                                        value: 0.0
                                        style: ProgressBarStyle{
                                            background: Rectangle{
                                                radius: 8
                                                color: "#505050"
                                                implicitWidth: 200
                                                implicitHeight: 24
                                            }
                                            progress: Rectangle{
                                                radius: 8
                                                color: "#fed700"
                                            }
                                        }
                                    }
                                }
                                
                                GridLayout{
                                    id: paramsGrid
                                    width: parent.width*0.8
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    columns:3
                                    // spacing:parent.width*0.05
                                    // class XMLparams():
                                    //     base_sample_rate: float = 1.000000
                                    //     date: str = "14/07/2021"
                                    //     time: str = "22:15"
                                    //     driver_name: str = "aa"
                                    //     vehicle_id: str = "E18"
                                    //     venue: str = "USP"
                                    //     short_comment: str = "xx (SD)"
                                    //     long_comment: 
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Período (ms)"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                        }
                                    }   
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Data"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                        }
                                    }
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Piloto"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                        }
                                    }   
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Carro"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                        }
                                    } 
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Lugar"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                        }
                                    }
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Comentário curto"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                        }
                                    } 


                                    
                                }
                                

                            }
                        }
                    }
                    
                    RoundComponent{
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_debug.svg"
                        iconWidth: 36
                        iconHeight: 36
                        text: "Receptor"
                        
                       SerialRecieveComponent{
                            id: receptorSRC
                            switchVisible: true
                            anchors.horizontalCenter: parent.horizontalCenter
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }
                }
                
            
        }
    }
}