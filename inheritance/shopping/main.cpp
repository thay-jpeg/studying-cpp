#include <iostream>
#include <iomanip>
#include "Produto.h"
#include "Carrinho.h"

using namespace std;

int main()
{
    cout << "INICIO DOS TESTES DO E-COMMERCE" << endl;
    cout << "-----------------------------------" << endl
         << endl;

    cout << "1. Testando a classe Produto..." << endl;
    Produto p1("Mouse Gamer RGB", 120.50, "MOU-001");
    Produto p2("Teclado Mecanico", 350.99, "TEC-002");
    Produto p3("Headset 7.1", 450.00, "HED-003");
    Produto p4_duplicado("Mouse Gamer RGB", 120.50, "MOU-001"); // Para testar o ==

    cout << "   - Teste de impressao (operator<<):" << endl;
    cout << "     " << p1 << endl;
    cout << "     " << p2 << endl
         << endl;

    cout << "   - Teste de comparacao (operator==):" << endl;
    if (p1 == p4_duplicado)
    {
        cout << "     CORRETO: p1 e p4_duplicado sao iguais (mesmo codigo)." << endl;
    }
    else
    {
        cout << "     ERRO: p1 e p4_duplicado deveriam ser iguais." << endl;
    }

    if (!(p1 == p2))
    {
        cout << "     CORRETO: p1 e p2 sao diferentes." << endl;
    }
    else
    {
        cout << "     ERRO: p1 e p2 deveriam ser diferentes." << endl;
    }
    cout << "-----------------------------------" << endl
         << endl;

    cout << "2. Testando a classe Carrinho..." << endl;

    Carrinho carrinho_ana("Ana");
    carrinho_ana += p1;
    carrinho_ana += p3;

    cout << "   - Teste de exibirCarrinho() e calcularTotal():" << endl;
    carrinho_ana.exibirCarrinho();
    cout << fixed << setprecision(2);
    cout << "   - TOTAL DO CARRINHO DA ANA: R$ " << carrinho_ana.calcularTotal() << endl
         << endl;

    cout << "3. Testando a juncao de carrinhos (operator+)..." << endl;
    Carrinho carrinho_bruno("Bruno");
    carrinho_bruno += p2;

    cout << "   - Criando carrinho conjunto..." << endl;
    Carrinho carrinho_conjunto = carrinho_ana + carrinho_bruno;

    carrinho_conjunto.setNome("Compra Corporativa Ana & Bruno");
    cout << "   - Nome do carrinho conjunto alterado para: '" << carrinho_conjunto.getNome() << "'" << endl
         << endl;

    cout << "   - Conteudo do carrinho conjunto:" << endl;
    carrinho_conjunto.exibirCarrinho();
    cout << "   - TOTAL DO CARRINHO CONJUNTO: R$ " << carrinho_conjunto.calcularTotal() << endl;
    cout << "-----------------------------------" << endl
         << endl;

    cout << "FIM DOS TESTES" << endl;

    return 0;
}