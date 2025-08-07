#include "configuration.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // acessando a instancia da classe com ponteiro
    Configuration *config = Configuration::getInstance();

    cout << endl << "Main: O volume do jogo tem como padrao: " << config->getVolume() << "%!" << endl
         << endl;

    cout << "Main: O brilho da tela esta setado com o valor: " << config->getBrilho() << "%!" << endl
         << endl;

    config->setBrilho(85);
    config->setVolume(100);

    cout << "===== Valores ajustados =====" << endl
         << endl;

    cout << "Main: O volume do jogo tem: " << config->getVolume() << "%!" << endl
         << endl;

    cout << "Main: O brilho da tela esta com: " << config->getBrilho() << "%!" << endl
         << endl;

    return 0;
}
