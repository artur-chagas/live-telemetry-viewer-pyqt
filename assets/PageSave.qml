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
                // receptorSRC.textConsole.text += qsTr(text) + "\n";
                // bridge.updateComponents(text);
            }
        }
        function onSetProgress(progress){
            progressBar.value = progress;
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
                                            enabled: fieldSampleRate.acceptableInput && fieldDate.acceptableInput &&
                                            (fileDialog.fileUrl != "") && fieldDriver.acceptableInput
                                            anchors.right: parent.right
                                            width: parent.width*0.1
                                            icon.source: "images/icon_save.svg"
                                            icon.color: enabled ? "#fed700" : "#505050"
                                            onClicked: {
                                                var timeStr = Qt.formatDateTime(new Date(), "hh:mm").replace(":", "-");
                                                bridge.startLogConversion([fileDialog.fileUrl.toString(), fieldSampleRate.text, fieldDate.text, timeStr, fieldDriver.text, fieldVehicle.text, fieldVenue.text, fieldComment.text]);
                                            }
                                        }
                                    }
                                    QQC1.ProgressBar{
                                        id:progressBar
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
                                                id: progressBarRect
                                                radius: 8
                                                color: "#fed700"
                                                SequentialAnimation on color{
                                                    loops: Animation.Infinite
                                                    ColorAnimation { from: "#fed700"; to: "#ffee8f"; duration: 500 }
                                                    ColorAnimation { from: "#ffee8f"; to: "#fed700"; duration: 500 }
                                                }
                                            }
                                        }
                                        Behavior on value{
                                            NumberAnimation{
                                                duration:250
                                            }
                                        }
                                    }
                                }
                                
                                GridLayout{
                                    id: paramsGrid
                                    width: parent.width*0.8
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    columns:3
                                    Column{
                                        Layout.alignment: Qt.AlignHCenter
                                        Text{
                                            font.pointSize: 12
                                            text: "Período (ms)"
                                            color: "#ffffff"
                                        }
                                        TextField{
                                            placeholderText: qsTr("1-5000 ms")
                                            text: "10"
                                            id: fieldSampleRate
                                            validator: IntValidator {bottom: 1; top: 5000;}
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
                                            id: fieldDate
                                            validator: RegExpValidator {regExp: /^(0?[1-9]|[12][0-9]|3[01])[\/](0?[1-9]|1[012])[\/\-]\d{4}$/}
                                            Component.onCompleted: {
                                                var data = Qt.formatDateTime(new Date(),"dd/MM/yyyy")
                                                text = data
                                            }
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
                                            id: fieldDriver
                                            validator: RegExpValidator{regExp: /^[\w]+$/}
                                            text: "Piloto"
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
                                            id: fieldVehicle
                                            validator: RegExpValidator{regExp: /^[\w]+$/}
                                            text: "E18"
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
                                            id: fieldVenue
                                            validator: RegExpValidator{regExp: /^[\w]+$/}
                                            text: "USP"
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
                                            id: fieldComment
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
                            isReceptor: true
                            anchors.horizontalCenter: parent.horizontalCenter
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }
                }
                
            
        }
    }
}