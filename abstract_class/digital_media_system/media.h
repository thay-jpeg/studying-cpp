#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string>

using namespace std;

class Media
{
protected:
    string nomeArquivo;

public:
    Media(string nome="Unknown") : nomeArquivo(nome) {}

    virtual ~Media() {}

    // pure virtual function
    virtual void tocar() const = 0;

};

#endif