#include "login.h"

Login *Login::login = nullptr;

Login::Login() : user(nullptr) {}

Login *Login ::getInstance()
{
    if (login == nullptr)
        login = new Login();

    return login;
}

void Login::doLogin(ObjectUser *user)
{
    Login *sessao = Login::getInstance();

    if (sessao->user != nullptr)
    {
        cout << "\nJa existe uma sessao de login para este usuario. Por favor, realize o logoff para ter um novo login.\n"
             << endl;
        return;
    }
    if (verificaUser(sessao))
    {
        sessao->user = user;
        cout << "\nLogin realizado com sucesso, bem-vindo(a) " << sessao->user->getName() << "!" << endl;
    }

    else
        cout << "\nCredenciais incorretas.\n"
             << endl;
}

bool Login::verificaUser(ObjectUser *user)
{
    ObjectUser userpadrao;

    if (userpadrao.getName() == user->getName() && userpadrao.getSenha() == user->getSenha())
        return true;

    else
        return false;
}

void Login::doLogoff()
{
    Login *sessao = Login::getInstance();

    if (sessao->user != nullptr)
    {
        cout << "\nLogoff de " << sessao->user->getName() << " realizado com sucesso!" << endl;
        sessao->user = nullptr;
    }
    else
        cout << "\nVoce ja esta deslogado." << endl;
}

ObjectUser *Login::getUser()
{
    return Login::getInstance()->user;
}