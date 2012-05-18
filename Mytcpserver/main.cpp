#include <QtCore/QCoreApplication>
#include"tcpserver.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    tcpserver server;
    return a.exec();
}
