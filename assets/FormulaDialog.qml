import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Dialogs 1.3

Popup{
        id:popup

        anchors.centerIn: Overlay.overlay
        property alias text: popupText.text
        property alias iconSource: icon.source

        modal:true
        focus:true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside
    
        background: Rectangle{
            color: "#181818"
            radius: 8
        }


        Column{
            Row{
                Image{
                    id: icon
                }
                Text{
                    id: popupText
                    color: "#ffffff"
                    anchors.verticalCenter: icon.verticalCenter
                }
                
            }
            
            Button{
                text: qsTr("OK")
                onClicked: popup.close()
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
