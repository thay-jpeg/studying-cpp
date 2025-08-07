#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Lista
{
protected:
    struct No
    {
        T info;
        No *prox;

        No(const T &info) : info(info), prox(nullptr) {}
    };

    No *inicio;

    void insereOrdenadoRecursivo(No **prim, const T &info)
    {
        if (*prim == nullptr)
        {
            *prim = new No(info);
            return;
        }

        if (info < (*prim)->info)
        {
            No *aux = new No(info);
            aux->prox = *prim;
            *prim = aux;
            return;
        }

        insereOrdenadoRecursivo(&(*prim)->prox, info);
    }

    bool removeElementoRecursivo(No **prim, const T &info)
    {
        if (*prim == nullptr)
        {
            cout << "Nao ha o elemento " << info << " para remover!" << endl;
            return false;
        }

        if ((*prim)->info == info)
        {
            No *aux = *prim;
            *prim = (*prim)->prox;
            delete aux;
            return true;
        }

        if ((*prim)->info > info)
        {
            return false;
        }

        return removeElementoRecursivo(&(*prim)->prox, info);
    }

public:
    Lista() : inicio(nullptr) {}

    ~Lista()
    {
        cout << "Destruindo lista" << endl;

        No *aux = inicio;

        while (aux != nullptr)
        {
            No *prox = aux;
            aux = aux->prox;
            delete prox;
        }
    }

    void insereOrdenado(const T &info)
    {
        insereOrdenadoRecursivo(&this->inicio, info);
    }

    void removeElemento(const T &info)
    {
        removeElementoRecursivo(&this->inicio, info);
    }

    void imprimir() const
    {
        cout << "[ ";

        No *aux = this->inicio;

        while (aux != nullptr)
        {
            cout << aux->info << " ";
            aux = aux->prox;
        }

        cout << "]" << endl
             << endl;
    }
};

#endif