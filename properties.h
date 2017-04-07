#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <QObject>

class Properties : public QObject
{
    Q_OBJECT
    //Direction du rebot
    Q_PROPERTY(int direction READ direction WRITE setdirection NOTIFY directionChanged)
    //Position du rebot
    Q_PROPERTY(int valx READ nvalx WRITE setvalx NOTIFY valxChanged)
    Q_PROPERTY(int valy READ valy WRITE setvaly NOTIFY valyChanged)
    //rotation du rebot
    Q_PROPERTY(int robotrotation READ robotrotation WRITE setrobotrotation NOTIFY robotrotationChanged)

public:
    explicit Properties(QObject *parent = 0);

    //Direction du rebot
    int direction();
    void setdirection(int dir);

//Position du rebot X & Y
    int valx();
    void setvalx(int val);
//------------------------
    int valy();
    void setvaly(int val);

//rotation du rebot
    int robotrotation();
    void setrobotrotation(int val);


signals:
    directionChanged();
    valxChanged();
    valyChanged();
    robotrotationChanged();


private:
    int m_direction;
    int m_valx;
    int m_valy;
    int m_rr;
};

#endif // PROPERTIES_H
