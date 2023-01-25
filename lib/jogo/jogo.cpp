#include <jogo.hpp>
#include <constantes.hpp>
#include <passaro.hpp>
#include <cacto.hpp>

Jogo::Jogo() {
    tela = U8GLIB_SSD1306_128X64(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);
    status = JOGANDO;
    passaro = Passaro();
    cacto = Cacto();
    velocidade = 5;
}

void Jogo::setup() {
    randomSeed(analogRead(A3));
    Wire.begin();
    Wire.beginTransmission(MPU);
    Wire.write(0x6B);
    Wire.write(0);
    Wire.endTransmission(true);
    Serial.begin(9600);
}

void Jogo::loop() {
    
    atualiza();

    if (status == MENU) {
        renderizaMenuIniciarJogo();
    }
    if (status == JOGANDO) {
        renderizaPartida();
    }
    if (status == PERDEU) {
        renderizaPerdeuJogo();
    }
}

void Jogo::atualiza() {
    acel.atualizaDados();
    pontuacao += 1;
}

void Jogo::renderizaMenuIniciarJogo() {

}

void Jogo::renderizaPartida() {
    tela.firstPage();

    do {
        chao.printarNaTela(tela);
        dino.printarNaTela(tela);
        cacto.printarNaTela(tela);
        //passaro.printarNaTela(tela);
    } while (tela.nextPage());


   acel.detectaMovimento();
   
    if(acel.detectaPulou()){
        dino.pularDino();
    } else if(acel.detectaAbaixou()){
        dino.abaixaDino();
    } else if (acel.detectaParado()){
        dino.andaDino();
    }

    chao.atualizar(velocidade);
    dino.atualizar();
    passaro.atualizar(velocidade);
    cacto.atualizar(velocidade);
}

void Jogo::renderizaPerdeuJogo() {

}