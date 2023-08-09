#include "processing/networking/Sender.h"

Sender::Sender(const QString& serverAddress, quint16 serverPort)
{
	m_Socket.connectToHost(serverAddress, serverPort);

	if (!m_Socket.waitForConnected(5000))
		throw std::runtime_error(m_Socket.errorString().toStdString());
}

void Sender::sendMessage(const QString& message)
{
	m_Socket.write(message.toUtf8());
	m_Socket.waitForBytesWritten();
}

Sender::~Sender()
{
	m_Socket.disconnectFromHost();
	m_Socket.waitForDisconnected();
}