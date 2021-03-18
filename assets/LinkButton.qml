import QtQuick 2.14

Text{
    property alias text: textComponent.text
    property int index
    property alias bold: textComponent.font.bold

    color: "#ffffff"
    id: textComponent
    MouseArea{
        anchors.fill:parent
        cursorShape: Qt.PointingHandCursor
        onClicked: {
            view.setCurrentIndex(index);
            button0.bold = false
            button1.bold = false
            button2.bold = false
            button3.bold = false
            button4.bold = false
            bold = true
        }
    }
}