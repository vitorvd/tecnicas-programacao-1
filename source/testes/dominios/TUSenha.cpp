#include "../../../header/testes/dominios/TUSenha.h"

// 211060737

TUEstado TUSenha::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUSenha::construir() {
    dominio = new Senha();
    estado = new TUEstado();
}

void TUSenha::testarCenarioSucesso() {
    dominio->setValor("ABC123");
}

void TUSenha::testarCenarioFalha() {
    dominio->setValor("AABBCC");
}