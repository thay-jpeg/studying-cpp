#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>
#include <string>

using namespace std;

class Produto
{
    protected:
    string id;
    double preco;

    public:

    Produto(string id, double preco);

    double getPreco() const;
    string getId() const;

    virtual void exibirDetalhes() const;

    virtual ~Produto();
};

#endif