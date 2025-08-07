#ifndef VIDEO_FILE_H
#define VIDEO_FILE_H
#include "media.h"
#include <iostream>
#include <string>

class VideoFile : public Media
{
protected:
    string resolucao;

public:
    VideoFile(string nomeArquivo, string resolucao = "144p") : Media(nomeArquivo)
    {
        this->resolucao = resolucao;
    }

    void tocar() const override
    {
        cout << endl
             << "Exibindo video: " << this->nomeArquivo << " em " << this->resolucao << "!" << endl;
    }

    ~VideoFile() {}
};

#endif