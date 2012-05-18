#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include<QTcpServer>
#include<QTcpSocket>
#include<iostream>
#include<QDebug>
class tcpserver : public QObject
{
    Q_OBJECT
public:
    explicit tcpserver(QObject *parent = 0);
    
signals:
    
public slots:
    void newconnection();
private:
    QTcpServer *server;
    
};

#endif // TCPSERVER_H
