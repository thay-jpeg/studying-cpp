#include <iostream>
#include <string>
#include "lista.h"

using namespace std;

int main() {
    Lista<int> minhaLista;

    minhaLista.insereOrdenado(20);
    minhaLista.insereOrdenado(10);
    minhaLista.insereOrdenado(40);
    minhaLista.insereOrdenado(30);
    minhaLista.insereOrdenado(5);

    cout << endl << "Lista original:" << endl;
    minhaLista.imprimir();

    cout << "Removendo o elemento 20..." << endl;
    minhaLista.removeElemento(20);
    minhaLista.imprimir();

    cout << "Removendo o elemento 5..." << endl;
    minhaLista.removeElemento(5);
    minhaLista.imprimir();

    cout << "Removendo o elemento 40..." << endl;
    minhaLista.removeElemento(40);
    minhaLista.imprimir();
    
    cout << "Tentando remover o elemento 99..." << endl;
    minhaLista.removeElemento(99);

    minhaLista.imprimir();

    return 0; 
}