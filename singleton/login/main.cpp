#include <iostream>
#include <vector>
#include <string>
#include <limits>

#include "objectuser.h"
#include "login.h"

using namespace std;

void exibirMenu() {
    cout << "\n===== SISTEMA DE LOGIN =====" << endl;
    cout << "1. Fazer Login" << endl;
    cout << "2. Fazer Logoff" << endl;
    cout << "3. Verificar Status do Login" << endl;
    cout << "4. Sair" << endl;
    cout << "============================" << endl << endl;
    cout << "Escolha uma opcao: ";
}

int main() {

    vector<ObjectUser> usuariosCadastrados;
    usuariosCadastrados.push_back(ObjectUser("Thaynara", "01122018"));
    usuariosCadastrados.push_back(ObjectUser("admin", "admin123"));
    usuariosCadastrados.push_back(ObjectUser("Noslen", "030911"));
    // ----------------------------------------------------

    int opcao;

    while (true) {
        exibirMenu();
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        switch (opcao) {
            case 1: {

                if (Login::getUser() != nullptr) {
                    cout << "\nERRO: Ja existe um usuario logado. Faca o logoff primeiro." << endl;
                    break;
                }

                bool loginSucesso = false;
                
                for (int tentativas = 5; tentativas > 0; --tentativas) {
                    cout << "\n--- TENTATIVA " << (6 - tentativas) << " de 5 ---\n" << endl;
                    string nomeInput, senhaInput;

                    cout << "Digite o nome de usuario: ";
                    getline(cin, nomeInput);

                    cout << "Digite a senha: ";
                    getline(cin, senhaInput);

                    ObjectUser* usuarioEncontrado = nullptr;
                    for (size_t i = 0; i < usuariosCadastrados.size(); ++i) {
                        if (usuariosCadastrados[i].getName() == nomeInput && usuariosCadastrados[i].getSenha() == senhaInput) {
                            usuarioEncontrado = &usuariosCadastrados[i];
                            break; 
                        }
                    }

                    if (usuarioEncontrado != nullptr) {
                        Login::doLogin(usuarioEncontrado);
                        loginSucesso = true;
                        break;
                    } else {
                        cout << "\nCredenciais incorretas. Voce tem mais " << (tentativas - 1) << " tentativas." << endl;
                    }
                }

                if (!loginSucesso) {
                    cout << "\nLIMITE DE TENTATIVAS EXCEDIDO. Tente novamente mais tarde." << endl;
                }
                break;
            }
            case 2: { 
                Login::doLogoff();
                break;
            }
            case 3: { 
                ObjectUser* usuarioLogado = Login::getUser();
                if (usuarioLogado != nullptr) {
                    cout << "\nStatus: O usuario '" << usuarioLogado->getName() << "' esta logado." << endl;
                } else {
                    cout << "\nStatus: Ninguem esta logado." << endl;
                }
                break;
            }
            case 4: { 
                cout << "\nEncerrando o programa..." << endl;
                return 0;
            }
            default: {
                cout << "\nOpcao invalida. Tente novamente." << endl;
                break;
            }
        }
    }

    return 0;
}