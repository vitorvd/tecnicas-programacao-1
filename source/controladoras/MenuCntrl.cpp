#include "../../header/controladoras/MenuCntrl.h"

void MenuCntrl::exibirAutenticarOuCadastrar() {
    system("clear");
    string opcoes[] = {"Autenticar", "Cadastrar"};
    int tamanho = sizeof(opcoes) / sizeof(opcoes[0]);
    int opcao = exibirMenu("SEJA BEM-VINDO!", opcoes, tamanho);

    switch (opcao) {
        case 1:
            this->desenvolvedorCntrl->autenticar();
            break;
        case 2:
            this->desenvolvedorCntrl->cadastrar();
            exibirAutenticarOuCadastrar();
            break;
        default:
            exibirAutenticarOuCadastrar();
            break;
    }

    try {
        exibirMenuEntidades();
    }catch (bad_alloc &ex) {
        cout << "\n[ERRO] " << ex.what();
    }catch (...){
        cout << "\n[ERRO] Desconhecido";
    }
}

void MenuCntrl::exibirMenuEntidades() {
    Desenvolvedor desenvolvedor = desenvolvedorCntrl->servico->getDesenvolvedorLogado();
    system("clear");
    string opcoes[] = {
            "Visualizar informações (Desenvolvedor)",
            "Editar informações (Desenvolvedor)",
            "Descadastrar (Desenvolvedor)",
            "Cadastrar (Teste)",
            "Editar (Teste)",
            "Listar (Testes)",
            "Descadastrar (Testes)",
    };

    int tamanho = sizeof(opcoes) / sizeof(opcoes[0]);
    string cabecalho = "OLÁ, " + desenvolvedor.getNome().getValor();
    int opcao = exibirMenu(cabecalho, opcoes, tamanho);

    switch (opcao) {
        case 1:
            desenvolvedorCntrl->visualizar();
            break;
        case 2:
            desenvolvedorCntrl->editar();
            break;
        case 3:
            testeCntrl->servico->descadastrarVinculadosAoDesenvolvedor(desenvolvedorCntrl->servico->getDesenvolvedorLogado());
            desenvolvedorCntrl->descadastrar();
            break;
        case 4:
            testeCntrl->cadastrar();
            break;
        case 5:
            testeCntrl->editar();
            break;
        case 6:
            testeCntrl->listar();
            break;
        case 7:
            testeCntrl->descadastrar();
            break;
        default:
            exibirMenuEntidades();
            break;
    }

    //Opção 3 = Descadastrar = Logout
    if(opcao == 3) {
        exibirAutenticarOuCadastrar();
    }else{
        exibirMenuEntidades();
    }
}