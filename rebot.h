#ifndef REBOT_H
#define REBOT_H
#include <properties.h>
#include <QObject>

class Rebot : public QObject
{
    Q_OBJECT
public:
    explicit Rebot(QObject *parent = 0);
    void init();
    void avancer();
    void reculer();
    void tourner_a_gauche();
    void tourner_a_droite();
    bool mur();
    Properties *item=new Properties(this);
    int x;
    int y;
    int dir;

signals:

public slots:
};

#endif // REBOT_H
