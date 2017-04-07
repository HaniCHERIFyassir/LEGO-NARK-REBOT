#include "rebot.h"
#include<QDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

Rebot::Rebot(QObject *parent) : QObject(parent)
{
    qmlRegisterType<Properties>("properties",1,0,"Properties");


}

void Rebot::init()
{

}

void Rebot::avancer()
{

    dir=item->direction();
    switch (dir) {
    case 1: y=item->valy(); item->setvaly(y-80);

        break;
    case 2: x=item->valx(); item->setvalx(x+80);



        break;
    case 3: y=item->valy(); item->setvaly(y+80);

        break;
    case 4:x=item->valx(); item->setvalx(x-80);

        break;
    default:
        break;
    }
}

void Rebot::reculer()
{
    dir=item->direction();
    switch (dir) {
    case 1: y=item->valy(); item->setvaly(y+80);

        break;
    case 2: x=item->valx(); item->setvalx(x-80);


        break;
    case 3: y=item->valy(); item->setvaly(y-80);

        break;
    case 4:x=item->valx(); item->setvalx(x+80);

        break;
    default:
        break;
    }
}

void Rebot::tourner_a_gauche()
{
    dir=item->direction();
    switch (dir) {
    case 1: item->setrobotrotation(315);

        break;
    case 2:item->setrobotrotation(45);

        break;
    case 3:item->setrobotrotation(135);

        break;
    case 4:item->setrobotrotation(225);

        break;
    default:
        break;
    }
}

void Rebot::tourner_a_droite()
{
    dir=item->direction();
    switch (dir) {
    case 1: item->setrobotrotation(135);

        break;
    case 2:item->setrobotrotation(225);

        break;
    case 3:item->setrobotrotation(315);

        break;
    case 4:item->setrobotrotation(45);

        break;
    default:
        break;
    }
}

bool Rebot::mur()
{
    dir=item->direction();
    x=item->valx();
    y=item->valy();
    bool limite;
    switch (dir) {
    case 1:if((y-80)<0)limite=false;

        break;
    case 2:if((x+80)>650)limite=false;

        break;
    case 3:if((y+80)>650)limite=false;

        break;
    case 4:if((x-80)<0)limite=false;

        break;
    default: limite=true;
        break;
    }
    return limite;
}
