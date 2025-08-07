#include "configuration.h"

// inicializar o ponteiro estatico para o objeto configuration como null fora da classe
Configuration *Configuration::config = nullptr;

Configuration::Configuration()
{
    this->brilho = 100;
    this->volume = 80;
}

// se a instancia ainda nao foi criada, crie ela
Configuration *Configuration ::getInstance()
{
    // sera feito apenas na primeira vez
    if (config == nullptr)
        config = new Configuration();

    // retorna sempre o mesmo objeto
    return config;
}

void Configuration::setBrilho(int valor)
{
    this->brilho = valor;
}

int Configuration::getBrilho() const
{
    return this->brilho;
}

void Configuration::setVolume(int volume)
{
    this->volume = volume;
}

int Configuration::getVolume() const
{
    return this->volume;
}