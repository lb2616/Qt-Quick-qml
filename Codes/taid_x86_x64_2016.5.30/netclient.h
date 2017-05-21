#ifndef NETCLIENT_H
#define NETCLIENT_H

#include <QHostAddress>
#include <QObject>
#include <QTcpSocket>
/*
����ʵ��
��������״̬
��������¼
��ȡ�豸�б�
�ļ�����
������Դ������
*/
class NetClient : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool connected READ connected WRITE setConnected NOTIFY connectedChanged)
public:
    explicit NetClient(QObject *parent = 0);

    void init();
    bool fileTransmit();

    bool connected()const;
    void setConnected(bool status);

    bool writeData(QString msg);
signals:
    void connectedChanged(bool status);

public slots:
    void slt_deviceList();

    void slt_connected();
    void slt_disconnected();
    void dataReceived();
private:
    bool m_isConnected;//��������״̬
    bool m_hasLogin;
    QTcpSocket *m_tcpSocket;
    QHostAddress m_HostAddress;
};

#endif // NETCLIENT_H
