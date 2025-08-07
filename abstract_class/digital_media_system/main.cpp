#include "media_player.h"
#include "media.h"
#include "music_file.h"
#include "video_file.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // não permitido pois a classe base é abstrata
    // Media media;

    MediaPlayer *reproducer = new MediaPlayer();

    MusicFile music1 = MusicFile("DtMF", "Bad Bunny", 241);
    MusicFile music2 = MusicFile("Like Crazy", "Jimin", 203);
    MusicFile music3 = MusicFile("P do Pecado", "Grupo Menos eh Mais feat. Simone Mendes", 192);

    VideoFile video1 = VideoFile("One piece", "Full HD 4k");
    VideoFile video2 = VideoFile("Avatar: Fogo e Cinzas", "1080p");
    VideoFile video3 = VideoFile("Interestelar", "Full HD 4k");

    reproducer->adicionar(music1);
    reproducer->adicionar(music2);
    reproducer->adicionar(music3);

    reproducer->adicionar(video1);
    reproducer->adicionar(video2);
    reproducer->adicionar(video3);

    reproducer->reproduzirTudo();

    delete reproducer;

    return 0;
}