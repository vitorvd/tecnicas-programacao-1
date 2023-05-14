#include "../../../header/testes/dominios/TUClasse.h"

// 211060737

TUEstado TUClasse::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUClasse::construir() {
    dominio = new Classe();
    estado = new TUEstado();
}

void TUClasse::testarCenarioSucesso() {
    dominio->setValor("UNIDADE");
}

void TUClasse::testarCenarioFalha() {
    dominio->setValor("GABIGOL");
}