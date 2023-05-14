#include "../../../header/testes/dominios/TUData.h"

// 211060737

TUEstado TUData::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUData::construir() {
    dominio = new Data();
    estado = new TUEstado();
}

void TUData::testarCenarioSucesso() {
    dominio->setValor("15/MAI/2002");
}

void TUData::testarCenarioFalha() {
    dominio->setValor("31/FEV/2002");
}