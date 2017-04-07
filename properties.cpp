#include "properties.h"

Properties::Properties(QObject *parent) : QObject(parent)
{

}

int Properties::direction()
{
    return m_direction;
}

void Properties::setdirection(int dir)
{
    if(m_direction==dir)return;
    m_direction=dir;

}

int Properties::valx()
{
 return m_valx;
}

void Properties::setvalx(int val)
{
    if(m_valx==val)return;
    m_valx=val;

}

int Properties::valy()
{
    return m_valy;
}

void Properties::setvaly(int val)
{
    if(m_valy==val)return;
    m_valy=val;
}

int Properties::robotrotation()
{
 return m_rr;
}

void Properties::setrobotrotation(int val)
{
    if(m_rr==val)return;
    m_rr=val;

}
