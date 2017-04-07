#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <rebot.h>
#include <properties.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Rebot *lego=new Rebot();
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

   lego->avancer();
   lego->avancer();



    return app.exec();
}
