#include "quimico.h"
#include "produto.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Produto* p = new Produto("P1", "Bola", 5, 9.90);
    Quimico* q = new Quimico("P2", "Alcool", 15, 13.99);

    q->setInflamavel(true);

    cout << "Produto" << endl << p->toString() << endl;
    cout << "Quimico" << endl << q->toString() << endl;

    p->atualizaPreco(0.15);
    q->atualizaPreco(0.8);

    cout << "Produto" << endl << p->toString() << endl;
    cout << "Quimico" << endl << q->toString() << endl;

    delete p;
    delete q;

    return 0;
}