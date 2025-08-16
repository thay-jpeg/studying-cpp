#include "Gerente.h"
#include <iostream>

using namespace std;

Gerente::Gerente(string nome, double salarioBase, double bonus) : Funcionario(nome, salarioBase)
{
    this->bonusAnual = bonus;
}

double Gerente::calcularSalario()
{
    return this->salarioBase + this->bonusAnual / 12;
}

void Gerente::exibirInformacoes()
{
    Funcionario::exibirInformacoes();
    cout << "Tipo: Gerente" << endl;
    cout << "Salario: " << this->calcularSalario() << endl;
}