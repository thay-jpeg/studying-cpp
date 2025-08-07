#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
protected:
    string nome;
    int id;

public:
    Funcionario(string nome = "Indefinido", int id = 0) : nome(nome), id(id) {}

    virtual ~Funcionario() {}

    void exibirInfoBase() const
    {
        cout << "\nNome: " << this->nome << endl;
        cout << "ID: " << this->id << endl;
    }

    // garante abstração da classe
    virtual double calcularSalario() const = 0;
};

#endif