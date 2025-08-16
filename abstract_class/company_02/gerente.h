#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"
#include <string>

using namespace std;

class Gerente : public Funcionario
{
private:
    double bonusAnual;

public:
    Gerente(string nome, double salarioBase, double bonus);
    double calcularSalario() override;
    void exibirInformacoes() override;
};

#endif