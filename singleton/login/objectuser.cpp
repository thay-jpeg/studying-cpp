#include "objectuser.h"

ObjectUser::ObjectUser() : nome("Thaynara"), senha("030911") {}

ObjectUser::ObjectUser(string nome, string senha) : nome(nome), senha(senha) {}

void ObjectUser::setName(string name)
{
    this->nome = nome;
}

string ObjectUser::getName() const
{
    return this->nome;
}

void ObjectUser::setSenha(string senha)
{
    this->senha = senha;
}

string ObjectUser::getSenha() const
{
    return this->senha;
}