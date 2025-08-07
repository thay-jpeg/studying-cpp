#ifndef CARRINHO_H
#define CARRINHO_H
#include "produto.h"
#include <vector>

class Carrinho
{
protected:
    string nomeCliente;

    vector<Produto> carrinhoCompras;

public:
    string getNome() const;

    void setNome(const string &nome);

    const vector<Produto>& getCarrinho() const;

    Carrinho(string nome);

    Carrinho &operator+=(const Produto &novo);

    Carrinho operator+(const Carrinho &outro);

    double calcularTotal() const;

    void exibirCarrinho() const;

    ~Carrinho();
};

#endif