#include "servidor.h"

Servidor::Servidor(QObject *parent) : QObject(parent)
{
}

void Servidor::receberMensagem(const QString &mensagem)
{
    qDebug() << "Servidor recebeu:" << mensagem;
    emit broadcasting(mensagem);
}