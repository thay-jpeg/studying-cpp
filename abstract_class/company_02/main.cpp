#include <iostream>
#include <vector>
#include <iomanip>
#include "Desenvolvedor.h"
#include "Gerente.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    vector<Funcionario *> funcionarios;

    funcionarios.push_back(new Desenvolvedor("Ana", 5000.00, 3));
    funcionarios.push_back(new Gerente("Bruno", 10000.00, 10000.00));

    for (Funcionario *f : funcionarios)
    {
        f->exibirInformacoes();
        cout << endl;
    }

    cout << "Total de funcionarios: " << Funcionario::getTotalFuncionarios() << endl;

    for (Funcionario *f : funcionarios)
    {
        delete f;
    }

    return 0;
}