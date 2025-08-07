#include "inventario.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    Celular sp1("Galaxy S20", 1399.90, "Samsung", 128);
    Celular sp2("Galaxy S25 Ultra+", 2899.90, "Samsung", 512);
    Celular *sp3 = new Celular("Iphone 16 Pro Max", 10299.90, "Apple", 512);

    Notebook nb1("MSI Cyborg 15 A13V", 5399.90, "I7-13620H", 16);
    Notebook nb2("MSI Cyborg 15 A12V", 4699.90, "I7-12650H", 8);
    Notebook *nb3 = new Notebook("Positivo", 1849.90, "I3-8620H", 4);

    Inventario<Celular> estoqueCelulares("Estoque de Celulares");

    //estoqueCelular.adicionarItem(nb1) não funcionaria pois o template garante segurança em tempo
    //de compilacao para que tipos diferentes de dados nao sejam inseridos na mesma instancia
    estoqueCelulares.adicionarItem(sp1);
    estoqueCelulares.adicionarItem(sp2);
    estoqueCelulares.adicionarItem(*sp3);

    Inventario<Notebook> estoqueNotebooks("Estoque de Notebooks");

    estoqueNotebooks.adicionarItem(nb1);
    estoqueNotebooks.adicionarItem(nb2);
    estoqueNotebooks.adicionarItem(*nb3);

    cout << "===== Relatorio de Celulares =====" << endl << endl;
    
    estoqueCelulares.exibirRelatorio();

    cout << "Valor total em estoque: R$ " << fixed << setprecision(2) << estoqueCelulares.calcularValorTotal() << "!" << endl << endl;

    cout << "==================================" << endl << endl;

    cout << "===== Relatorio de Notebooks =====" << endl << endl;

    estoqueNotebooks.exibirRelatorio();

    cout << "Valor total em estoque: R$ " << fixed << setprecision(2) << estoqueNotebooks.calcularValorTotal() << "!" << endl << endl; 

    cout << "==================================" << endl << endl;

    delete sp3;
    delete nb3;

    return 0;
}