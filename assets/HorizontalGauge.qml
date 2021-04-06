import QtQuick 2.14
import QtQuick.Controls 2.14

Rectangle{
    id: rect
    property alias labelText: label.text
    color: "#505050"
    width: parent.width * 0.95
    height: Overlay.overlay.height * 0.1
    // a altura do gauge é proporcional à janela (Overlay) pois o
    // scrollview impede overflow
    anchors.horizontalCenter: parent.horizontalCenter
    Row{
        spacing: 10
        anchors.centerIn: parent
        Text{
            width: rect.width * 0.1
            id: label
            color: "#ffffff"
            font.weight: Font.ExtraBold
            font.pointSize: 10
            fontSizeMode: Text.Fit
            wrapMode: Text.Wrap
            horizontalAlignment: Text.AlignHCenter
        }
        Rectangle{
            anchors.verticalCenter: label.verticalCenter
            width: rect.width * 0.7
            height: 10
            color: "#fed700"
        }
        Text{
            anchors.verticalCenter: label.verticalCenter
            color: "#ffffff"
            font.weight: Font.ExtraBold
            text: "80"
            horizontalAlignment: Text.AlignHCenter
            font.pointSize: 35

        }
    }
}