#pragma once

enum StatusJogo {
    MENU = 0,
    JOGANDO = 1,
    PERDEU = 2,
};

struct Jogo {
    
    Dino dino;
    Objeto objetos[4];
    int pontuacao, velocidade;
    StatusJogo status;


    Jogo();

    void loop();
    void renderizaMenuIniciarJogo();
    void renderizaPartida();
    void renderizaPerdeuJogo();
};