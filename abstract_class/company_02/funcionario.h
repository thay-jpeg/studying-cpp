#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario
{
protected:
    string nome;
    double salarioBase;
    static int totalFuncionarios;

public:
    Funcionario(string nome, double salarioBase);
    virtual ~Funcionario();

    virtual double calcularSalario() = 0;
    virtual void exibirInformacoes();

    static int getTotalFuncionarios();
};

#endif