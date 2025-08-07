#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "celular.h"
#include "notebook.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
class Inventario
{
private:
    string nome;
    vector<T> itens;

public:
    Inventario(string nome="Inventario Padrao") : nome(nome) {}

    const vector<T>& getLista() const
    {
        return this->itens;
    }

    void adicionarItem(const T &item)
    {
        Inventario::itens.push_back(item);
    }

    void exibirRelatorio() const
    {
        for (const T &item : itens)
        {
            item.exibirDetalhes();
        }
    }

    double calcularValorTotal() const
    {
        double total = 0.0;

        for(const T& item : itens) {
            total += item.getPreco();
        }

        return total;
    }
};

#endif