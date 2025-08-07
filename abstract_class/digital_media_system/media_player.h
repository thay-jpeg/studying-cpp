#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H
#include "media.h"
#include "music_file.h"
#include "video_file.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class MediaPlayer
{
private:
    // array de ponteiros para a classe base Media garantindo polimorfismo entre os tipos de files
    vector<unique_ptr<Media>> filaReproducao;

public:
    template <typename T>
    void adicionar(const T &media)
    {
        filaReproducao.push_back(make_unique<T>(media));
    }

    void reproduzirTudo() const
    {
        cout << endl << "====== Lista de reproducao do momento ======" << endl;

        for (const auto& media : filaReproducao)
        {
            media->tocar();
        }

        cout << endl << "============================================" << endl << endl;
    }

    ~MediaPlayer() {}
};

#endif