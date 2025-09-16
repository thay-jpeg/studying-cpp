#include <QCoreApplication>
#include "servidor.h"
#include "cliente.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Servidor servidor;
    Cliente cliente1("Cliente 1");
    Cliente cliente2("Cliente 2");
    Cliente cliente3("Cliente 3");

    QObject::connect(&cliente1, &Cliente::enviar, &servidor, &Servidor::receberMensagem);
    QObject::connect(&cliente2, &Cliente::enviar, &servidor, &Servidor::receberMensagem);
    QObject::connect(&cliente3, &Cliente::enviar, &servidor, &Servidor::receberMensagem);

    QObject::connect(&servidor, &Servidor::broadcasting, &cliente1, &Cliente::receberMensagem);
    QObject::connect(&servidor, &Servidor::broadcasting, &cliente2, &Cliente::receberMensagem);
    QObject::connect(&servidor, &Servidor::broadcasting, &cliente3, &Cliente::receberMensagem);

    qDebug() << "Iniciando teste...";
    cliente1.enviarMensagem("Ola a todos, sou o Cliente 1!");

    return app.exec();
}