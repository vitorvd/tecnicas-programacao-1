#include "../../../header/testes/dominios/TUTexto.h"

// 211060737

TUEstado TUTexto::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUTexto::construir() {
    dominio = new Texto();
    estado = new TUEstado();
}

void TUTexto::testarCenarioSucesso() {
    dominio->setValor("Oi-isso-e-teste");
}

void TUTexto::testarCenarioFalha() {
    dominio->setValor("(Oi, eu estou testando)");
}