#include "playlist.h"

Playlist::Playlist(string nome) : nome(nome) {}

Playlist::~Playlist()
{
    cout << "Destruindo Playlist" << endl;
}

void Playlist::setNome(const string &novo)
{
    this->nome = novo;
}

string Playlist::getNome() const
{
    return this->nome;
}

const vector<Music> &Playlist ::getMusicas()
{
    return this->musicas;
}

void Playlist ::adicionarMusica(const Music &musica)
{
    this->musicas.push_back(musica);
}

void Playlist::adicionarMusica(const string &titulo, const string &artista, const int duracao)
{
    Music musica(titulo, artista, duracao);

    this->adicionarMusica(musica);
}

Playlist &Playlist::operator+=(const Music &outro)
{
    this->adicionarMusica(outro);
    return *this;
}

Playlist Playlist::operator+(Playlist &outraPlaylist) const
{
    Playlist newplaylist = *this;

    newplaylist.setNome(this->getNome() + " & " + outraPlaylist.getNome());

    const vector<Music> &musicasAdd = outraPlaylist.getMusicas();

    for (size_t i = 0; i < musicasAdd.size(); i++)
    {
        const Music &musica = musicasAdd[i];

        newplaylist.adicionarMusica(musica);
    }

    return newplaylist;
}

void Playlist::imprimir() const
{
    cout << endl << this->getNome() << " esta sendo tocada!" << endl
         << endl;
    cout << "---- Musicas do momento ----" << endl
         << endl;

    for (size_t i = 0; i < this->musicas.size(); i++)
    {
        cout << this->musicas[i] << endl;
    }

    cout << "\n----------------------------\n" << endl;
}