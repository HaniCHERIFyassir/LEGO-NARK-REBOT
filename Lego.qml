import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick 2.5
"hany"

Item {

    id: rebot
    property int direc:1
    property int myrotation: 135
    property int posx: 20
    property int posy: 20
    property int h: 0
    property int w: 0


    Rectangle {
        id:objet
        x: posx
        y: posy
        width: w/16
        height: h/16
        radius: 30 // This gives rounded corners to the Rectangle
        gradient: Gradient { // This sets a vertical gradient fill
            GradientStop { position: 0.0; color: "aqua" }
            GradientStop { position: 1.0; color: "teal" }
        }
        rotation: myrotation
        color: "green"
        /*rotation:rebot.myrotation*/
        border { width: 1; color: "black" } // This sets a 3px wide black border to be drawn
        Behavior on rotation {
            RotationAnimation { target: objet; duration: 690
                easing.type: Easing.OutBack;
                easing.amplitude: 3.0;
                easing.period: 3.0
            }

        }
        Behavior on x {
            XAnimator {
                target: objet; duration: 690
                easing.type: Easing.OutBack;
                easing.amplitude: 3.0;
                easing.period: 3.0
            }
        }
        Behavior on y {
            YAnimator {
                target: objet; duration: 690
                easing.type: Easing.OutBack;
                easing.amplitude: 3.0;
                easing.period: 3.0
            }
        }

        /* MouseArea {
             id:sud
             anchors.fill:parent
             onClicked: objet.rotation +=90
             hoverEnabled: true

         }*/


        Rectangle {

            width: parent.width/3
            height: parent.height/3
            color:"#000000"
            radius: 30
            anchors.left:parent
        }
    }

    /*
       North:45°
       South:225°
       East :135°
       West : 315°
    */
    focus: true




}

