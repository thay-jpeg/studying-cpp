#include "music.h"

Music::Music(string titulo, string artista, int duracao) : titulo(titulo), artista(artista), duracao(duracao) {}

ostream &operator<<(ostream &os, const Music &outro)
{
    int minutos = outro.duracao / 60;
    int segundos = outro.duracao % 60;

    os << outro.titulo << "-" << outro.artista << "(" << minutos << ":" << segundos << ")";
    return os;
}

bool Music::operator==(const Music outro) const
{
    if (this->titulo == outro.titulo && this->artista == outro.artista)
        return true;

    else
        return false;
}

Music::~Music()
{
}