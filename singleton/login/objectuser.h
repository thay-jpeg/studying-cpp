#ifndef OBJECTUSER_H
#define OBJECTUSER_H
#include <iostream>
#include <string>

using namespace std;

class ObjectUser
{
protected:
    string nome;
    string senha;

public:
    ObjectUser();

    ObjectUser(string nome, string senha);

    void setName(string nome);
    string getName() const;

    void setSenha(string senha);
    string getSenha() const;
};

#endif
