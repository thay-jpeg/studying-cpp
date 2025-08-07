#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include "produto.h"
#include <iostream>
#include <string>

class Notebook : public Produto
{
private:
    string processador;
    int memoriaRAM;

public:
    Notebook(string id, double preco, string processador="Unknown", int memoriaRAM=0) : Produto(id, preco)
    {
        this->processador = processador;
        this->memoriaRAM = memoriaRAM;
    }

    string getProcessador() const
    {
        return this->processador;
    }

    int getRAM() const
    {
        return this->memoriaRAM;
    }

    void exibirDetalhes() const override
    {
        Produto::exibirDetalhes();

        cout << "Processador: " << this->getProcessador() << endl;
        cout << "RAM: " << this->getRAM() << " GB" << endl;
    }
};

#endif