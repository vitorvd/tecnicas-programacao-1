#include "../../../header/testes/dominios/TUCodigo.h"

// 211060737

TUEstado TUCodigo::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUCodigo::construir() {
    dominio = new Codigo();
    estado = new TUEstado();
}

void TUCodigo::testarCenarioSucesso() {
    dominio->setValor("ABC123");
}

void TUCodigo::testarCenarioFalha() {
    dominio->setValor("123456");
}