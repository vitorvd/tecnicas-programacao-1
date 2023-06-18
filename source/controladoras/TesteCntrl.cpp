#include "../../header/controladoras/TesteCntrl.h"
#include "../../header/entidades/Teste.h"
#include "../../header/dominios/Texto.h"
#include "../../header/dominios/Codigo.h"
#include "../../header/dominios/Classe.h"

using namespace std;

void TesteCntrl::cadastrar() {
    exibirCabecalho("CADASTRANDO TESTE");

    try {
        string nomeStr = solicitarResposta("Qual o nome do Teste?");
        Texto nome;
        nome.setValor(nomeStr);

        string classeStr = solicitarResposta("Qual a classe do Teste?");
        Classe classe;
        classe.setValor(classeStr);

        Teste *teste = new Teste();
        teste->setNome(nome);
        teste->setClasse(classe);

        servico->cadastrar(teste);
    }catch (invalid_argument &ex) {
        cout << "\n[ERRO] " << ex.what() << "\n\n";
        cadastrar();
    }

}

void TesteCntrl::descadastrar() {
    exibirCabecalho("QUAL TESTE VOCÊ DESEJA DESCADASTRAR?");
    int quantidadeTestes = exibirTestes();

    if(quantidadeTestes > 0) {
        try{
            string codigoStr = solicitarResposta("Informe o Código do Teste que deseja descadastrar:");
            Codigo codigo;
            codigo.setValor(codigoStr);

            servico->validarSeCodigoTemTeste(codigo);

            servico->descadastrar(codigo);
        }catch (invalid_argument &ex) {
            cout << "\n[ERRO] " << ex.what() << "\n\n";
            descadastrar();
        }
    }else{
        solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
    }
}

void TesteCntrl::listar() {
    Desenvolvedor desenvolvedor = servico->getDesenvolvedorServico()->getDesenvolvedorLogado();
    string matricula = desenvolvedor.getMatricula().getValor();
    exibirCabecalho("LISTAGEM DE TESTES VINCULADO AO DESENVOLVEDOR: " + matricula);

    exibirTestes();

    solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
}

void TesteCntrl::editar() {
    exibirCabecalho("QUAL TESTE VOCÊ DESEJA EDITAR?");
    int quantidadeTestes = exibirTestes();

    if(quantidadeTestes > 0) {
        try{
            string codigoStr = solicitarResposta("Informe o Código do Teste que deseja editar:");
            Codigo codigo;
            codigo.setValor(codigoStr);

            Teste *teste = servico->validarSeCodigoTemTeste(codigo);

            exibirTexto("Nome: " + teste->getNome().getValor());
            string nomeStr = solicitarResposta("Qual o novo nome?");
            Texto nome;
            nome.setValor(nomeStr);

            exibirTexto("Classe: " + teste->getClasse().getValor());
            string classeStr = solicitarResposta("Qual a nova classe?");
            Classe classe;
            classe.setValor(classeStr);

            teste->setNome(nome);
            teste->setClasse(classe);
        }catch (invalid_argument &ex) {
            cout << "\n[ERRO] " << ex.what() << "\n\n";
            editar();
        }
    }else{
        solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
    }
}

int TesteCntrl::exibirTestes() {
    Desenvolvedor desenvolvedor = servico->getDesenvolvedorServico()->getDesenvolvedorLogado();
    string matricula = desenvolvedor.getMatricula().getValor();

    int contador = 0;
    for (const auto& par : servico->getRepositorio()) {
        const Teste *teste = par.second;
        if(teste->getDesenvolvedor().getMatricula().getValor() == matricula){
            contador++;
            exibirTexto(to_string(contador) + ". Código: " + teste->getCodigo().getValor() + " || Nome: " + teste->getNome().getValor() + " || Classe: " + teste->getClasse().getValor());
        }
    }

    if(contador == 0)
        exibirTexto("Não há nenhum Teste associado ao desenvolvedor.");

    return contador;
}