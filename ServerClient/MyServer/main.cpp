#include <QCoreApplication>
#include "MyServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server First;

    return a.exec();
}
