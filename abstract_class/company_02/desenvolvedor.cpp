#include "Desenvolvedor.h"
#include <iostream>

using namespace std;

Desenvolvedor::Desenvolvedor(string nome, double salarioBase, int projetos) : Funcionario(nome, salarioBase)
{
    this->quantidadeProjetos = projetos;
}

double Desenvolvedor::calcularSalario()
{
    return this->salarioBase + 500 * this->quantidadeProjetos;
}

void Desenvolvedor::exibirInformacoes()
{
    Funcionario::exibirInformacoes();
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Salario: " << this->calcularSalario() << endl;
}