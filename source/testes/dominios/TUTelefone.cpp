#include "../../../header/testes/dominios/TUTelefone.h"
#include "../../../header/dominios/Telefone.h"

// 211060737

TUEstado TUTelefone::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUTelefone::construir() {
    dominio = new Telefone();
    estado = new TUEstado();
}

void TUTelefone::testarCenarioSucesso() {
    dominio->setValor("+619123456789");
}

void TUTelefone::testarCenarioFalha() {
    dominio->setValor("619123456789");
}