import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.12
import QtQuick.Dialogs 1.3

Popup{
        id:popup
        property alias text: popupText.text
        property alias iconSource: icon.source
        property alias color: rect.color

        dim: false
        modal:true
        closePolicy: Popup.CloseOnEscape
        
        x: (parent.width - width)/2
        y: (parent.height - height)*0.95

        background: Rectangle{
            id: rect
            radius: 8
        }

        onOpened: timer.start()
        Timer{
            id: timer
            interval: 2000
            onTriggered: popup.close()
        }
        

        
        Row{
            spacing: 10
            Image{
                id: icon
                anchors.verticalCenter: parent.verticalCenter
            }
            Text{
                id: popupText
                color: "#ffffff"
                anchors.verticalCenter: parent.verticalCenter
            }
            
            
        }
        
            
        
    }
