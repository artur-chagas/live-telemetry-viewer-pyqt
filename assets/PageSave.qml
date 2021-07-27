import QtQuick 2.14
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
                            height: 100
                            anchors.top: parent.top
                            anchors.topMargin: parent.height * 0.04
                            anchors.horizontalCenter: parent.horizontalCenter
                            Column{
                                anchors.horizontalCenter: parent.horizontalCenter
                                
                                Row{
                                    spacing: 10
                                    Text{
                                        anchors.verticalCenter: parent.verticalCenter
                                        font.pointSize: 15
                                        color: "#ffffff"
                                        id: fileIndicator
                                        text: "Nenhum arquivo selecionado"
                                    }
                                    Button{
                                        icon.source: "images/icon_folder.svg"
                                        icon.color: "#fed700"
                                        onClicked: fileDialog.open()
                                    }
                                }
                                QQC1.ProgressBar{
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    width: parent.width
                                    value: 0.0
                                    style: ProgressBarStyle{
                                        background: Rectangle{
                                            color: "#505050"
                                            implicitWidth: 200
                                            implicitHeight: 24
                                        }
                                        progress: Rectangle{
                                            color: "#fed700"
                                        }
                                    }
                                }
                                Row{
                                    
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