#ifndef QUIMICO_H
#define QUIMICO_H
#include "produto.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Quimico : public Produto
{
private:
    bool inflamavel;

public:
    Quimico() : Produto(), inflamavel(false) {}

    Quimico(string codigo) : Produto(codigo), inflamavel(false) {}

    Quimico(string codigo, string nome, int quantidade, double preco) : Produto(codigo, nome, quantidade, preco), inflamavel(false) {}

    bool getInflamavel()
    {
        return this->inflamavel;
    }

    void setInflamavel(bool sinal)
    {
        this->inflamavel = sinal;
    }

    string toString() const override
    {
        string ss = Produto::toString();

        if (this->inflamavel)
            ss += "Este produto eh inflamavel!\n";

        return ss;
    }
};

#endif