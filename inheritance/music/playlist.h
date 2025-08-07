#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "music.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Playlist
{
protected:
    string nome;

    vector<Music> musicas;

public:
    Playlist(string nome);

    void setNome(const string &novo);

    string getNome() const;

    const vector<Music> &getMusicas();

    void adicionarMusica(const Music &musica);

    void adicionarMusica(const string &titulo, const string &artista, const int duracao);

    Playlist &operator+=(const Music &outro);

    Playlist operator+( Playlist &outraPlaylist) const;

    void imprimir() const;

    ~Playlist();
};

#endif