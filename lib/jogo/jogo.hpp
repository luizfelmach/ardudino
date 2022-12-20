#pragma once

#include <U8glib.h>
#include <dino.hpp>
#include <objeto.hpp>
#include <chao.hpp>
#include <acelerometro.hpp>

enum StatusJogo {
    MENU = 0,
    JOGANDO = 1,
    PERDEU = 2,
};

struct Jogo {
    U8GLIB_SSD1306_128X64 tela;
    Dino dino;
    Chao chao;
    Objeto objetos[4];
    int pontuacao, velocidade;
    StatusJogo status;
    Acelerometro acel;


    Jogo();

    void setup();
    void loop();
    void atualiza();
    void renderizaMenuIniciarJogo();
    void renderizaPartida();
    void renderizaPerdeuJogo();
};