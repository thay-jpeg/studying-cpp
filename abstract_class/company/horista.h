#ifndef HORISTA_H
#define HORISTA_H
#include "funcionario.h"
#include <iostream>
#include <string>

using namespace std;

class Horista : public Funcionario
{

private:
    double valorHora;
    double horasTrabalhadas;

public:
    Horista(string nome, int id, double valorHora = 0, double horasTrabalhadas = 0) : Funcionario(nome, id)
    {
        this->valorHora = valorHora;
        this->horasTrabalhadas = horasTrabalhadas;
    }

    double calcularSalario() const override
    {
        return this->valorHora * this->horasTrabalhadas;
    }

};

#endif