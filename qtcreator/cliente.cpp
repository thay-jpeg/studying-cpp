#include "cliente.h"

Cliente::Cliente(const QString &nome, QObject *parent) : QObject(parent), nome(nome)
{
}

void Cliente::receberMensagem(const QString &mensagem)
{
    qDebug() << "Cliente" << nome << "recebeu:" << mensagem;
}

void Cliente::enviarMensagem(const QString &mensagem)
{
    qDebug() << "Cliente" << nome << "enviando:" << mensagem;
    emit enviar(mensagem);
}