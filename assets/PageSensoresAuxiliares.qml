import QtQuick 2.14
import QtQuick.Controls 2.14
import QtCharts 2.14


Page{
    property alias column: sensoresColumn
    property double timerIterations: 0
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
                        id: rc
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_lightning.svg"
                        iconWidth: 36
                        iconHeight: 36
                        text: "Sensores Auxiliares"
                        //prevenir overflow
                        ScrollView{
                            width: parent.width*0.9
                            height: parent.height*0.9
                            anchors.centerIn: parent
                            Rectangle{
                                anchors.fill: parent
                                color: "#181818"
                                Column{
                                    id: sensoresColumn
                                    spacing: 10
                                    width: parent.width
                                    height: Overlay.overlay.height * 0.05
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    
                                
                                }
                            //     ChartView {
                            //         id:chart
                            //         antialiasing: true
                            //         theme: ChartView.ChartThemeDark
                            //         anchors.fill:parent

                            //         ValueAxis{
                            //             id:axisX
                            //             min:0
                            //         }
                            //         ValueAxis{
                            //             id:axisY
                            //             min:0.3
                            //             max:-0.10
                            //         }
                            //         LineSeries {
                            //             id:lineSeries
                            //             axisX:axisX
                            //             axisY:axisY
                            //             useOpenGL: true
                            //             // XYPoint { x: 0; y: 0.0 }
                            //         }
                            //         Timer{
                            //             interval: 1
                            //             running: true
                            //             repeat: true
                            //             onTriggered: {
                            //                 timerIterations += 0.01
                            //                 bridge.updateChart(timerIterations, lineSeries)
                            //                 if(timerIterations > axisX.max){
                            //                     axisX.max = timerIterations
                            //                     axisX.min += 0.01
                            //                 }
                            //             }
                            //         }
                            //     }
                            //     Text{
                            //         id:chartText
                            //         text:"a"
                            //     }
                            }
                            
                        }
                        
                    }
                }
            
        }
    }
}