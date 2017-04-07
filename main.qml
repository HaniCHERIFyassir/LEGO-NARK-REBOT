import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import properties 1.0

ApplicationWindow{
    visible: true
    id: root
    maximumHeight: 650
    maximumWidth:650
    minimumWidth:650
    minimumHeight:650
    width: 650
    height: 650

    Properties {
        id:austinos
        valx:180
        valy:180
        direction:2
        robotrotation:135


    }

    Mat{
        id:mygrid
        parent:root
        MouseArea {
            anchors.fill: parent
            onClicked:austinos.robotrotation=315

        }
    }
    Lego {
        id:cool
        w:mygrid.width
        h:mygrid.height
        myrotation:austinos.robotrotation
        posx: austinos.valx
        posy: austinos.valy
        direc:austinos.direction

    }



}//Window
