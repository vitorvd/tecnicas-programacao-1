#include "source/dominios/Classe.cpp"
#include "source/testes/dominios/TUClasse.cpp"
#include "source/dominios/Codigo.cpp"
#include "source/testes/dominios/TUCodigo.cpp"
#include "source/dominios/Data.cpp"
#include "source/testes/dominios/TUData.cpp"
#include "source/dominios/Matricula.cpp"
#include "source/testes/dominios/TUMatricula.cpp"
#include "source/dominios/Resultado.cpp"
#include "source/testes/dominios/TUResultado.cpp"
#include "source/dominios/Senha.cpp"
#include "source/testes/dominios/TUSenha.cpp"
#include "source/dominios/Telefone.cpp"
#include "source/testes/dominios/TUTelefone.cpp"
#include "source/dominios/Texto.cpp"
#include "source/testes/dominios/TUTexto.cpp"

#include "header/entidades/CasoTeste.h"
#include "source/testes/entidades/TUCasoTeste.cpp"
#include "header/entidades/Desenvolvedor.h"
#include "source/testes/entidades/TUDesenvolvedor.cpp"
#include "header/entidades/Teste.h"
#include "source/testes/entidades/TUTeste.cpp"

#include "source/controladoras/DesenvolvedorCntrl.cpp"
#include "source/controladoras/MenuCntrl.cpp"

#include "source/servicos/DesenvolvedorServico.cpp"

#include <iostream>
#include "string"

using namespace std;

template <typename T>
void executarTestesDominio(string nome) {
    T dominio;
    TUEstado estadoEntidade = dominio.run();
    if(estadoEntidade.getEstadoCenarioSucesso())
        cout << "[Dominio: " << nome << "] SUCESSO!\n";

    if(!estadoEntidade.getEstadoCenarioFalha())
        cout << "[Dominio: " << nome << "] FALHA: " << estadoEntidade.getMensagemCenarioFalha() << "\n\n";
}

template <typename T>
void executarTestesEntidade(string nomeEntidade) {
    T entidade;
    TUEstado estadoEntidade = entidade.run();
    if (estadoEntidade.getEstadoCenarioSucesso()) {
        cout << "[Entidade: " << nomeEntidade << "] SUCESSO!\n";
    } else {
        cout << "[Entidade: " << nomeEntidade << "] FALHA:" << estadoEntidade.getMensagemCenarioFalha() <<"\n";
    }
}

void executarTestes() {
    cout << "*** TESTES UNITÁRIOS: DOMINIOS ***\n\n";

    executarTestesDominio<TUClasse>("Classe");
    executarTestesDominio<TUCodigo>("Codigo");
    executarTestesDominio<TUData>("Data");
    executarTestesDominio<TUMatricula>("Matricula");
    executarTestesDominio<TUResultado>("Resultado");
    executarTestesDominio<TUSenha>("Senha");
    executarTestesDominio<TUTelefone>("Telefone");
    executarTestesDominio<TUTexto>("Texto");

    cout << "*** TESTES UNITÁRIOS: ENTIDADES ***\n\n";

    executarTestesEntidade<TUCasoTeste>("CasoTeste");
    executarTestesEntidade<TUDesenvolvedor>("Desenvolvedor");
    executarTestesEntidade<TUTeste>("Teste");
}

int main() {
    MenuCntrl *menuCntrl = new MenuCntrl();

    /* DESENVOLVEDOR */
    DesenvolvedorCntrl *desenvolvedorCntrl = new DesenvolvedorCntrl();
    IDesenvolvedorServico *desenvolvedorServico = new DesenvolvedorServico();
    desenvolvedorCntrl->setServico(desenvolvedorServico);

    menuCntrl->setDesenvolvedorCntrl(desenvolvedorCntrl);

    menuCntrl->exibirAutenticarOuCadastrar();

    delete menuCntrl;
    delete desenvolvedorCntrl;
    delete desenvolvedorServico;
    return 0;
}