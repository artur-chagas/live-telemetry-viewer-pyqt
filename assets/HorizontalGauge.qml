import QtQuick 2.14
import QtQuick.Controls 2.14

Rectangle{
    id: rect
    property alias labelText: label.text
    property alias minValue: minValue.text
    property alias maxValue: maxValue.text
    property int code
    property int position

    Connections{
        target: bridge
        function onSetComponentValue(code, array){
            currentValue.text = array[position];
        }
    }



    color: "#505050"
    width: parent.width
    height: Overlay.overlay.height * 0.1
    // a altura do gauge é proporcional à janela (Overlay) pois o
    // scrollview impede overflow
    anchors.horizontalCenter: parent.horizontalCenter
    Row{
        width: parent.width
        height: parent.height
        anchors.horizontalCenter: parent.horizontalCenter
        spacing: 10
        Text{
            id: label
            width: parent.height
            height: parent.height
            color: "#ffffff"
            minimumPointSize:1
            font.weight: Font.ExtraBold
            fontSizeMode: Text.Fit
            wrapMode: Text.Wrap
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }
        Column{
            anchors.verticalCenter: parent.verticalCenter
            width: parent.width - 2*parent.height - 20
            Rectangle{
                width: parent.width
                height: 10
                color: "#fed700"
            }
            Row{
                spacing: parent.width - minValue.width - maxValue.width
                width: parent.width
                Text{
                    id: minValue
                    color:"#ffffff"
                    text:"n/a"
                }
                Text{
                    id: maxValue
                    color:"#ffffff"
                    text:"n/a"
                }

            }
        }
        Text{
            id: currentValue
            width: parent.height
            height: parent.height
            color: "#ffffff"
            font.weight: Font.ExtraBold
            text: "n/a"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            fontSizeMode: Text.Fit
            minimumPointSize: 20
        }
    }
}