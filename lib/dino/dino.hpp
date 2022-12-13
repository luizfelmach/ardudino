#pragma once

struct Dino {
    int x, y;
    int vx, vy;
    int accx, accy;

    Dino();
    void atualizar();
    void pulaDino();
    void abaixaDino();
    void printarNaTela();
};