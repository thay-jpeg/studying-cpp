#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Produto
{
protected:
    string nome;
    double preco;
    string codigo;

public:

    double getPreco() const;

    Produto(string nome, double preco, string codigo);

    friend ostream &operator<<(ostream &os, const Produto &produto);

    bool operator==(const Produto &outro);

    ~Produto();
};

#endif