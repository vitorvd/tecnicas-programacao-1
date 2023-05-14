#include "../../../header/testes/dominios/TUMatricula.h"

// 211060737

TUEstado TUMatricula::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUMatricula::construir() {
    dominio = new Matricula();
    estado = new TUEstado();
}

void TUMatricula::testarCenarioSucesso() {
    dominio->setValor("1234561");
}

void TUMatricula::testarCenarioFalha() {
    dominio->setValor("1234567");
}