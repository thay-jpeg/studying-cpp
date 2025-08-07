#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <string>

using namespace std;

class Music
{
protected:
    string titulo;
    string artista;
    int duracao;

public:
    Music(string titulo, string artista, int duracao);

    friend ostream &operator<<(ostream &os, const Music &outro);

    bool operator==(const Music outro) const;

    ~Music();
};

#endif