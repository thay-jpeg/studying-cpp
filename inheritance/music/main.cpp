#include <iostream>
#include <string>
#include <vector>
#include "playlist.h"

using namespace std;

int main() {

    Music m1("Bohemian Rhapsody", "Queen", 355);
    Music m2("Stairway to Heaven", "Led Zeppelin", 482);
    Music m3("Hotel California", "Eagles", 391);
    Music m4("Bohemian Rhapsody", "Queen", 355); // Música duplicada para teste

    std::cout << "\n--- Testando a Classe Musica ---\n" << std::endl;
    std::cout << m1 << std::endl; // Deve imprimir: "Bohemian Rhapsody" - Queen (5:55)
    if (m1 == m4) {
        std::cout << "m1 e m4 sao a mesma musica." << std::endl;
    }
    if (!(m1 == m2)) {
        std::cout << "m1 e m2 sao musicas diferentes." << std::endl;
    }
    std::cout << std::endl;

    Playlist rockClassico("Classicos do Rock");

    rockClassico += m1;
    rockClassico.adicionarMusica(m2);

    Playlist playlist2("Mais Rock");
    playlist2.adicionarMusica("Another Brick in the Wall", "Pink Floyd", 240);

    Playlist playlistCompleta = rockClassico + playlist2;
    playlistCompleta.setNome("Rock Completo"); // (Opcional: Crie um método setNome)

    std::cout << "\n--- Testando a Classe Playlist ---" << std::endl;
    rockClassico.imprimir();
    std::cout << std::endl;
    playlistCompleta.imprimir();

    return 0;
}