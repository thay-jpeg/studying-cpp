#include "produto.h"

Produto::Produto(string nome, double preco, string codigo) : nome(nome), preco(preco), codigo(codigo) {}

Produto::~Produto() {}

ostream &operator<<(ostream &os, const Produto &produto)
{
    os << "[" << produto.codigo << "] " << produto.nome << " - R$ " << produto.preco << endl;
    return os;
}

bool Produto::operator==(const Produto &outro)
{
    if (this->codigo == outro.codigo)
        return true;

    else
        return false;
}

double Produto::getPreco() const
{
    return this->preco;
}
