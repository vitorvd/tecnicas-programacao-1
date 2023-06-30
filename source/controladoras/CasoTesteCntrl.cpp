#include "../../header/controladoras/CasoTesteCntrl.h"
#include "../../header/entidades/CasoTeste.h"
#include "../../header/dominios/Texto.h"
#include "../../header/dominios/Codigo.h"
#include "../../header/dominios/Classe.h"

using namespace std;

void CasoTesteCntrl::cadastrar() {
    exibirCabecalho("CADASTRANDO CASO DE TESTE");

    try {
        string codigoTesteStr = solicitarResposta("Informe o Código do Teste que esse Caso de Teste vai ser associado:");
        Codigo codigoTeste;
        codigoTeste.setValor(codigoTesteStr);
        Teste testeVinculado = *testeServico->validarSeCodigoTemTeste(codigoTeste);

        string nomeStr = solicitarResposta("Qual o nome do Caso de Teste?");
        Texto nome;
        nome.setValor(nomeStr);

        string acaoStr = solicitarResposta("Qual a ação do Caso de Teste?");
        Texto acao;
        acao.setValor(acaoStr);

        string respostaStr = solicitarResposta("Qual a resposta do Caso de Teste?");
        Texto resposta;
        resposta.setValor(respostaStr);

        string dataStr = solicitarResposta("Qual a data do Caso de Teste?");
        Data data;
        data.setValor(dataStr);

        string resultadoStr = solicitarResposta("Qual o resultado do Caso de Teste?");
        Resultado resultado;
        resultado.setValor(resultadoStr);

        CasoTeste *casoTeste = new CasoTeste();
        casoTeste->setTeste(testeVinculado);
        casoTeste->setNome(nome);
        casoTeste->setAcao(acao);
        casoTeste->setResposta(resposta);
        casoTeste->setData(data);
        casoTeste->setResultado(resultado);

        servico->cadastrar(casoTeste);
    }catch (invalid_argument &ex) {
        cout << "\n[ERRO] " << ex.what() << "\n\n";
        cadastrar();
    }
}

void CasoTesteCntrl::editar() {
    exibirCabecalho("QUAL CASO DE TESTE VOCÊ DESEJA EDITAR?");
    int quantidadeTestes = exibirTestes();

    if(quantidadeTestes > 0) {
        try{
            string codigoStr = solicitarResposta("Informe o Código do Caso de Teste que deseja editar:");
            Codigo codigo;
            codigo.setValor(codigoStr);
            CasoTeste *casoTeste = servico->validarSeCodigoTemCasoTeste(codigo);

            exibirTexto("Nome: " + casoTeste->getNome().getValor());
            string nomeStr = solicitarResposta("Qual o novo nome?");
            Texto nome;
            nome.setValor(nomeStr);

            exibirTexto("Ação: " + casoTeste->getAcao().getValor());
            string acaoStr = solicitarResposta("Qual a nova ação?");
            Texto acao;
            acao.setValor(acaoStr);

            exibirTexto("Resposta: " + casoTeste->getResposta().getValor());
            string respostaStr = solicitarResposta("Qual a nova resposta?");
            Texto resposta;
            resposta.setValor(respostaStr);

            exibirTexto("Data: " + casoTeste->getData().getValor());
            string dataStr = solicitarResposta("Qual a nova data?");
            Data data;
            data.setValor(dataStr);

            exibirTexto("Resultado: " + casoTeste->getResultado().getValor());
            string resultadoStr = solicitarResposta("Qual o novo resultado?");
            Resultado resultado;
            resultado.setValor(resultadoStr);

            casoTeste->setNome(nome);
            casoTeste->setAcao(acao);
            casoTeste->setResposta(resposta);
            casoTeste->setData(data);
            casoTeste->setResultado(resultado);

        }catch (invalid_argument &ex) {
            cout << "\n[ERRO] " << ex.what() << "\n\n";
            editar();
        }
    }else{
        solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
    }
}

void CasoTesteCntrl::listar() {
    Desenvolvedor desenvolvedor = desenvolvedorServico->getDesenvolvedorLogado();
    string matricula = desenvolvedor.getMatricula().getValor();
    exibirCabecalho("LISTAGEM DE CASO DE TESTES VINCULADO AO DESENVOLVEDOR: " + matricula);

    exibirTestes();

    solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
}

void CasoTesteCntrl::descadastrar() {
    exibirCabecalho("QUAL CASO DE TESTE VOCÊ DESEJA DESCADASTRAR?");
    int quantidadeTestes = exibirTestes();

    if(quantidadeTestes > 0) {
        try{
            string codigoStr = solicitarResposta("Informe o Código do Caso de Teste que deseja descadastrar:");
            Codigo codigo;
            codigo.setValor(codigoStr);

            servico->validarSeCodigoTemCasoTeste(codigo);

            servico->descadastrar(codigo);
        }catch (invalid_argument &ex) {
            cout << "\n[ERRO] " << ex.what() << "\n\n";
            descadastrar();
        }
    }else{
        solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
    }
}

int CasoTesteCntrl::exibirTestes() {
    Desenvolvedor desenvolvedor = desenvolvedorServico->getDesenvolvedorLogado();
    string matricula = desenvolvedor.getMatricula().getValor();

    int contador = 0;
    for (const auto& par : servico->getRepositorio()) {
        const CasoTeste *casoTeste = par.second;
        if(casoTeste->getTeste().getDesenvolvedor().getMatricula().getValor() == matricula){
            contador++;
            exibirTexto(to_string(contador) + ". Código: " + casoTeste->getCodigo().getValor() + " || Nome: " + casoTeste->getNome().getValor() + " || Ação: " + casoTeste->getAcao().getValor() + " || Resposta: " + casoTeste->getResposta().getValor() + " || Resultado: " + casoTeste->getResultado().getValor());
        }
    }

    if(contador == 0)
        exibirTexto("Não há nenhum Caso de Teste associado ao desenvolvedor.");

    return contador;
}