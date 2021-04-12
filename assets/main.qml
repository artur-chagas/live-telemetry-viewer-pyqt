// Estamos usando o QT5
import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Layouts 1.14
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.14




ApplicationWindow{
    id:window
    minimumWidth: 1000
    minimumHeight: 562
    visible: true
    width: Screen.desktopAvailableWidth * 0.6
    height: Screen.desktopAvailableHeight * 0.6
    title: qsTr("Live Telemetry Viewer")
    color: "#181818"
                                    
    Material.theme: Material.Dark
    Material.accent: Material.Yellow

    FontLoader{
        source:"fonts/Exo2-Regular.ttf"
        id:exo
    }
    FontLoader{
        source:"fonts/Exo2-ExtraBold.ttf"
        id:exoExtraBold
    }

    Connections{
        target: bridge
        function onCallComponentCreation(params){
            var component;
            var sprite;
            var pagesParent;
            var i;
            i = params[0];
            component = Qt.createComponent("HorizontalGauge.qml");
            pagesParent = view.children[0].children[0]
            
            if (pagesParent.children[i] != null){
                sprite = component.createObject(pagesParent.children[i].column, {labelText: params[1]});
            }
        }
    }


    header: RowLayout{
        id: header
        width: parent.width * 0.95
        height: 110 //Screen.desktopAvailableHeight * 0.15
        anchors.horizontalCenter: parent.horizontalCenter

        Rectangle{
            Layout.fillWidth: true
            height: parent.height * 0.5
            
            border.color: "#fed700"
            border.width: 0.5
            radius: 10
            gradient: Gradient{
                orientation: Gradient.Horizontal
                stops:
                GradientStop{
                    color: "#fed700"
                    position: 0
                }
                GradientStop{
                    color: "#80fed700"
                    position: 0.2
                }
                GradientStop{
                    color: "#00000000"
                    position: 1
                }
            }
            RowLayout{
                spacing:(parent.width-800)/7;
                Image{
                    width: 150
                    height: 52
                    source: "images/logo_formula.png"
                }
                
                LinkButton{
                    id: button0
                    text:"Tela Principal"
                    bold:true
                    index:0
                }
                LinkButton{
                    id: button1
                    text: "Sensores Auxiliares"
                    index:1
                }
                LinkButton{
                    id: button2
                    text: "S.D.D.F"
                    index:2
                }
                LinkButton{
                    id: button3
                    text: "Envio de Mensagens"
                    index:3
                }
                LinkButton{
                    id: button4
                    text: "Beacon + Debug"
                    index:4
                }
                
            }
            
        }
        
    }

    SwipeView{
        id:view
        anchors.fill: parent
        currentIndex:0
        interactive: false
     
        PageMain{
            id:pageMain
        }
        PageSensoresAuxiliares{
            id:pageSensoresAuxiliares
        }
        FormulaPage{
            text:"S.D.D.F"
        }
        FormulaPage{
            text:"Envio de Mensagens"
            
        }
        PageBeacon{}
    }

}
    