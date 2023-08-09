#pragma once

#include <QtNetwork/QTcpSocket.h>


class Sender
{
public:
	Sender(const QString& serverAddress, quint16 serverPort);
	~Sender();

public:
	void sendMessage(const QString& message);

private:
	QTcpSocket m_Socket;
};

