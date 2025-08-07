#include "carrinho.h"

string Carrinho::getNome() const
{
    return this->nomeCliente;
}

void Carrinho::setNome(const string &nome)
{
    this->nomeCliente = nome;
}

const vector<Produto>& Carrinho::getCarrinho() const
{
    return this->carrinhoCompras;
}

Carrinho::Carrinho(string nome) : nomeCliente(nome) {}

Carrinho::~Carrinho() {}

Carrinho &Carrinho::operator+=(const Produto &produto)
{
    this->carrinhoCompras.push_back(produto);
    return *this;
}

Carrinho Carrinho::operator+(const Carrinho &outro)
{
    Carrinho newCarrinho = *this;

    newCarrinho.setNome(this->nomeCliente + " & " + outro.nomeCliente);

    const vector<Produto> &addCompras = outro.getCarrinho();

    for (size_t i = 0; i < addCompras.size(); i++)
    {
        newCarrinho += addCompras[i];
    }

    return newCarrinho;
}

double Carrinho::calcularTotal() const
{
    double total = 0.0;

    const vector<Produto> &Compras = this->getCarrinho();

    for (size_t i = 0; i < this->carrinhoCompras.size(); i++)
    {
        const Produto produto_atual = Compras[i];

        total += produto_atual.getPreco();
    }

    return total;
}

void Carrinho::exibirCarrinho() const
{
    cout << "==============================================" << endl
         << endl;

    cout << "Ola, seja bem-vindo(a) " << this->nomeCliente << "!" << endl
         << endl;
    cout << "Este eh o seu carrinho de compras online:" << endl
         << endl;

    for (size_t i = 0; i < this->carrinhoCompras.size(); i++)
    {
        cout << this->carrinhoCompras[i] << endl;
    }

    cout << "==============================================" << endl
         << endl;
}
