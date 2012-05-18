#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include<QTcpSocket>
#include<QDebug>
#include<iostream>
class sockettest : public QObject
{
    Q_OBJECT
public:
    explicit sockettest(QObject *parent = 0);
    void Connect();
    
signals:
    
public slots:
private:
    QTcpSocket *socket;
    
};

#endif // SOCKETTEST_H
