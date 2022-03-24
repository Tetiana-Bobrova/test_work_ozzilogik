#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>

class Server : public QTcpServer{
    Q_OBJECT                    // для сигнально-слотових зв'язків

public:
    Server();                   // конструктор класу
    QTcpSocket *socket;         // об'єкт класу

private:
    QVector <QTcpSocket*> Sockets;  // вектор для сокетів
    QByteArray Data;                // об'єкт куди буде записуватись інформація, що передається
    void SendToClient(QString str);            // функція передачі даних клієнтам
    qint16 nextBlockSize;

public slots:
    void incomingConnection(qintptr socketDescriptor);  // обробник нових підключень
    void slotReadyRead();                               // обробник отриманих від клієнта повідомлень
};


#endif // MYSERVER_H
