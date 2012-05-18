#include "tcpserver.h"

tcpserver::tcpserver(QObject *parent) :
    QObject(parent)
{
    qDebug()<<"WELCOME TO SERVER";
    server=new QTcpServer(this);
   connect(server,SIGNAL(newConnection()),this,SLOT(newconnection()));
    quint16 serverport;
    std::cout<<"ENTER THE PORT NO=";
    std::cin>>serverport;
   if(!server->listen(QHostAddress::Any,serverport))
   {
       std::cout<<"SERVER COULD NOT BE STARTED\n";
   }
   else
   {
       std::cout<<"SERVER STARTED\n";
   }
}
void tcpserver::newconnection()
{
    QTcpSocket *socket=server->nextPendingConnection();
    socket->waitForReadyRead(5000);
    if(socket->readLine()=="start")
    {
        qDebug()<<"start";
        socket->write("start");
        socket->flush();
        QString clientmove="something";
        while(clientmove!="close")
        {
            char move[9];
            std::cout<<"ENTER THE MOVE=";
            std::cin>>move;
            socket->write(move);
            socket->flush();
            socket->waitForBytesWritten(10000);
            socket->waitForReadyRead(30000);
            clientmove=socket->readLine();
            qDebug()<<clientmove;
        }
     }
    socket->close();
    socket->waitForDisconnected(3000);
}
