#include "myserver.h"

myserver::myserver(QObject *parent) :
    QObject(parent)
{
    server=new QTcpServer(this);
    connect(server,SIGNAL(newConnection()),this,SLOT(newconnection()));
    if(!server->listen(QHostAddress::Any,1234))
    {
        qDebug()<<"Server started";
    }
    else
    {
        qDebug()<<"Server not started";
    }
}
void myserver::newconnection()
{
    QTcpSocket *socket=server->nextPendingConnection();
    socket->write("Hello");
    socket->flush();
    socket->waitForBytesWritten(3000);
    qDebug()<<socket->readAll();
    socket->close();

}
