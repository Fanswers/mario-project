#include "mainwindow.h"

#include <QApplication>
#include <myScene.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myScene scene;
    scene.show();

    return a.exec();
}
