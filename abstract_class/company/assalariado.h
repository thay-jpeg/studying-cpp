#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "funcionario.h"
#include <iostream>
#include <string>

using namespace std;

class Assalariado : public Funcionario
{
private:
    double salarioMensal;

public:
    Assalariado(string nome, int id, double salarioMensal = 0) : Funcionario(nome, id)
    {
        this->salarioMensal = salarioMensal;
    }

    double calcularSalario() const override
    {
        return this->salarioMensal;
    }
};

#endif