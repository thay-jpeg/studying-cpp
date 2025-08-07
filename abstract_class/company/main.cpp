#include "funcionario.h"
#include "horista.h"
#include "assalariado.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <iomanip>

using namespace std;

int main()
{
    Horista joao("Joao", 20, 5.88, 320);
    Assalariado maria("Maria", 18, 7418.52);

    vector<unique_ptr<Funcionario>> funcionarios;

    funcionarios.push_back(make_unique<Horista>(joao));
    funcionarios.push_back(make_unique<Assalariado>(maria));

    for (const auto &func : funcionarios)
    {
        func->exibirInfoBase();
        cout << "Salario calculado: R$ " << fixed << setprecision(2) << func->calcularSalario() << endl
             << endl;
        ;
    }

    // nao precisa de delete pois os ponteiros unique_ptr gerenciam a memoria automaticamente, fazendo o delete quando a
    // classe base funcionario for destruida

    return 0;
}