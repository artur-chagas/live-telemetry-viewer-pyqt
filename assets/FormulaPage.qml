import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14
Page{
    property alias text: textComponent.text
    Rectangle{
        color: "#181818"
        anchors.fill: parent
        RowLayout{
            Text{
                color: "#ffffff"
                id: textComponent
            }
        }
    }
}