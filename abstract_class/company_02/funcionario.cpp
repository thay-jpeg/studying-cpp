#include "Funcionario.h"
#include <iostream>

using namespace std;

int Funcionario::totalFuncionarios = 0;

Funcionario::Funcionario(string nome, double salarioBase)
{
    this->nome = nome;
    this->salarioBase = salarioBase;
    totalFuncionarios++;
}

Funcionario::~Funcionario()
{
}

void Funcionario::exibirInformacoes()
{
    cout << "Nome: " << this->nome << endl;
}

int Funcionario::getTotalFuncionarios()
{
    return totalFuncionarios;
}