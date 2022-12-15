#include <Arduino.h>
#include <jogo.hpp>

Jogo jogo = Jogo();

void setup(void) {
	jogo.setup();
}

void loop(void) {
	jogo.loop();
}
