#include "../../../header/testes/entidades/TUDesenvolvedor.h"

// 211060737 e 200019473

TUEstado TUDesenvolvedor::run() {
    construir();
    testarCenarioSucesso();
    destruir();
    return *estado;
}

void TUDesenvolvedor::construir() {
    entidade = new Desenvolvedor();
    estado = new TUEstado();
}

void TUDesenvolvedor::testarCenarioSucesso() {
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

    try {
        matricula.setValor("1234561");
        nome.setValor("VitorVersiani");
        senha.setValor("ABC123");
        telefone.setValor("+619123456789");

        entidade->setMatricula(matricula);
        entidade->setNome(nome);
        entidade->setSenha(senha);
        entidade->setTelefone(telefone);

        estado->setEstadoCenarioSucesso(true);
    }catch (invalid_argument &ex) {
        estado->setEstadoCenarioSucesso(false);
        estado->setMensagemCenarioFalha(ex.what());
    }
}