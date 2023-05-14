#include "../../../header/testes/dominios/TUResultado.h"
#include "../../../header/dominios/Resultado.h"

// 211060737

TUEstado TUResultado::run() {
    construir();
    runTestes();
    destruir();
    return *estado;
}

void TUResultado::construir() {
    dominio = new Resultado();
    estado = new TUEstado();
}

void TUResultado::testarCenarioSucesso() {
    dominio->setValor("APROVADO");
}

void TUResultado::testarCenarioFalha() {
    dominio->setValor("RECUPERAÇÃO");
}