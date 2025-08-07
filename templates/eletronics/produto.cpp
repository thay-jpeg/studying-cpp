#include "produto.h"
#include <iomanip>

Produto::Produto(string id="Unknown", double preco=0) : id(id), preco(preco) {}

Produto::~Produto() {}

double Produto::getPreco() const
{
    return this->preco;
}

string Produto::getId() const
{
    return this->id;
}

void Produto::exibirDetalhes() const
{
    cout << "[" << this->getId() << "] - R$ " << fixed << setprecision(2) << this->getPreco() << endl;
}
