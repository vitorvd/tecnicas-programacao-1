#include "../../../header/testes/entidades/TUCasoTeste.h"

// 211060737 e 200019473

TUEstado TUCasoTeste::run() {
    construir();
    testarCenarioSucesso();
    destruir();
    return *estado;
}

void TUCasoTeste::construir() {
    entidade = new CasoTeste();
    estado = new TUEstado();
}

void TUCasoTeste::testarCenarioSucesso() {
    Codigo codigo;
    Texto nome;
    Data data;
    Texto acao;
    Texto resposta;
    Resultado resultado;

    try {
        codigo.setValor("ABC123");
        nome.setValor("Entidade-CasoTeste");
        data.setValor("15/MAI/2002");
        acao.setValor("TU-Sucesso");
        resposta.setValor("Resposta-Teste");
        resultado.setValor("APROVADO");

        entidade->setCodigo(codigo);
        entidade->setNome(nome);
        entidade->setData(data);
        entidade->setAcao(acao);
        entidade->setResposta(resposta);
        entidade->setResultado(resultado);

        estado->setEstadoCenarioSucesso(true);
    }catch (invalid_argument &ex) {
        estado->setEstadoCenarioSucesso(false);
        estado->setMensagemCenarioFalha(ex.what());
    }
}