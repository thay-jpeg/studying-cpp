#ifndef CLIENTE_H
#define CLIENTE_H

#include <QObject>
#include <QDebug>

class Cliente : public QObject
{
    Q_OBJECT

public:
    explicit Cliente(const QString &nome, QObject *parent = nullptr);

signals:
    void enviar(const QString &mensagem);

public slots:
    void receberMensagem(const QString &mensagem);
    void enviarMensagem(const QString &mensagem);

private:
    QString nome;
};

#endif // CLIENTE_H