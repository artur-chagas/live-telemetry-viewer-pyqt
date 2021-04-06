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
                        id: rc
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_lightning.svg"
                        iconWidth: 36
                        iconHeight: 36
                        text: "Motor e Powertrain"
                        //prevenir overflow
                        ScrollView{
                            width: parent.width*0.9
                            height: parent.height*0.9
                            anchors.centerIn: parent
                            Rectangle{
                                anchors.fill: parent
                                color: "#181818"
                                Column{
                                    spacing: 10
                                    width: parent.width
                                    height: Overlay.overlay.height * 0.05
                                    anchors.horizontalCenter: parent.horizontalCenter
                                    HorizontalGauge{labelText: "Temp. do Motor"}
                                    HorizontalGauge{}
                                    HorizontalGauge{}
                                }
                            }
                            
                        }
                        
                    }
                }
            
        }
    }
}