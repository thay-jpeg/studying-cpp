#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class Produto
{
private:
    string codigo;
    string nome;
    int quantidade;
    double preco;

public:
    Produto()
    {
        this->codigo = "Default";
        this->nome = "Unknown";
        this->quantidade = 0;
        this->preco = 0;
    }

    Produto(string codigo) : codigo(codigo) {}

    Produto(string codigo, string nome, int quantidade, double preco) : codigo(codigo), nome(nome), quantidade(quantidade), preco(preco) {}

    ~Produto()
    {
        cout << "Destruindo objeto produto, liberando memoria..." << endl;
    }

    string getCodigo() const
    {
        return this->codigo;
    }

    string getNome() const
    {
        return this->nome;
    }

    int getQuantidade() const
    {
        return this->quantidade;
    }

    double getPreco() const
    {
        return this->preco;
    }

    void setCodigo(const string &codigo)
    {
        this->codigo = codigo;
    }

    void setNome(const string &nome)
    {
        this->nome = nome;
    }

    void setQuantidade(const int &quantidade)
    {
        this->quantidade = quantidade;
    }

    void setPreco(const double &preco)
    {
        this->preco = preco;
    }

    void atualizaPreco(const double &porcentagem)
    {
        this->preco += this->preco * porcentagem;
    }

    double totaliza() const
    {
        return this->quantidade * this->preco;
    }

    virtual string toString() const
    {
        stringstream ss;

        ss << "====== Valores dos atributos =====" << endl << endl;

        ss << "Codigo: " << this->getCodigo() << endl;
        ss << "Nome: " << this->getNome() << endl;
        ss << "Quantidade(s): " << this->getQuantidade() << endl;
        ss << "Preco: R$ " << fixed << setprecision(2) << this->getPreco() << endl;
        ss << "Valor total: R$ " << fixed << setprecision(2) << this->totaliza() << endl;

        return ss.str(); //converte o stream em uma string 
    }
};

#endif