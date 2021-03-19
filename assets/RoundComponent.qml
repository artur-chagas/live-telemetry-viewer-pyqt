import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14

Rectangle{
    property alias boxWidth: rect.width
    property alias iconSource: icon.source
    property alias iconWidth: icon.width
    property alias iconHeight: icon.height
    property alias text: text.text
    id: rect
    radius: 16
    border.color: "#fed700"
    border.width: 1
    color: "#181818"
    height: parent.height
    
    Rectangle{
        color:"#181818"
        
        width: childrenRect.width*1.1
        height: childrenRect.height
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom : parent.top
        anchors.bottomMargin: -0.45*height

        Row{
            spacing: 5
            anchors.horizontalCenter: parent.horizontalCenter
            Image{
                id: icon
                antialiasing: true
            }
            Text{
                id: text
                anchors.verticalCenter: icon.verticalCenter
                font.bold: true
                color: "#fed700"
            }
        }
}