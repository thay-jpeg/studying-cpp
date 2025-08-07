#ifndef MUSIC_FILE_H
#define MUSIC_FILE_H
#include "media.h"
#include <iostream>
#include <string>

class MusicFile : public Media
{
private:
    string artista;
    int duracaoSeg;

public:
    MusicFile(string nomeArquivo, string artista = "Unknown", int duracaoSeg = 0) : Media(nomeArquivo)
    {
        this->artista = artista;
        this->duracaoSeg = duracaoSeg;
    }

    void tocar() const override
    {
        int minutos = duracaoSeg / 60;
        int segundos = duracaoSeg % 60;

        cout << endl
             << "Tocando musica: " << this->nomeArquivo << " - " << this->artista << " (" << minutos << ":" << (segundos < 10? "0" : "") << 
            segundos << "s)" << endl;
    }

    ~MusicFile() {}
};

#endif