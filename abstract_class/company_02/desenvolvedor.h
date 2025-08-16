#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h"
#include <string>

using namespace std;

class Desenvolvedor : public Funcionario
{
private:
    int quantidadeProjetos;

public:
    Desenvolvedor(string nome, double salarioBase, int projetos);
    double calcularSalario() override;
    void exibirInformacoes() override;
};

#endif