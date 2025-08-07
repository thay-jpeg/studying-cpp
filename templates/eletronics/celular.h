#ifndef CELULAR_H
#define CELULAR_H
#include <iostream>
#include "produto.h"
#include <string>

using namespace std;

class Celular : public Produto
{
private:
    string marca;
    int armazenamento;

public:
    Celular(string id, double preco, string marca="Unknown", int armazenamento=0) : Produto(id, preco)
    {
        this->marca = marca;
        this->armazenamento = armazenamento;
    }

    string getMarca() const
    {
        return this->marca;
    }

    int getArmazenamento() const
    {
        return this->armazenamento;
    }

    void exibirDetalhes() const override
    {
        Produto::exibirDetalhes();
        cout << "Marca: " << this->getMarca() << endl; 
        cout << "Armazenamento: " << this->getArmazenamento() << " GB" << endl;
    }
};

#endif