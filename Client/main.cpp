#include "client.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Six-Degrees");

    Client w;
//    w.show();
    //w.hide();

    return a.exec();
}
