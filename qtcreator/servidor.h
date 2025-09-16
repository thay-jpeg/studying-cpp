#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <QObject>
#include <QDebug>

class Servidor : public QObject
{
    Q_OBJECT

public:
    explicit Servidor(QObject *parent = nullptr);

signals:
    void broadcasting(const QString &mensagem);

public slots:
    void receberMensagem(const QString &mensagem);
};

#endif // SERVIDOR_H