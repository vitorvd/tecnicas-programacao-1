#include "../../../header/testes/entidades/TUTeste.h"

// 211060737 e 200019473

TUEstado TUTeste::run() {
    construir();
    testarCenarioSucesso();
    destruir();
    return *estado;
}

void TUTeste::construir() {
    entidade = new Teste();
    estado = new TUEstado();
}

void TUTeste::testarCenarioSucesso() {
    Codigo codigo;
    Texto nome;
    Classe classe;

    try {
        codigo.setValor("ABC123");
        nome.setValor("TU-Cria-Teste");
        classe.setValor("UNIDADE");

        entidade->setCodigo(codigo);
        entidade->setNome(nome);
        entidade->setClasse(classe);

        estado->setEstadoCenarioSucesso(true);
    }catch (invalid_argument &ex) {
        estado->setEstadoCenarioSucesso(false);
        estado->setMensagemCenarioFalha(ex.what());
    }
}