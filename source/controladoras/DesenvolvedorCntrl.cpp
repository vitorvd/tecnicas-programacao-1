#include "../../header/controladoras/DesenvolvedorCntrl.h"

void DesenvolvedorCntrl::autenticar() {
    exibirCabecalho("AUTENTICAÇÃO");

    try{
        string matriculaStr = solicitarResposta("Qual a sua matrícula?");
        Matricula matricula;
        matricula.setValor(matriculaStr);

        string senhaStr = solicitarResposta("Qual a sua senha?");
        Senha senha;
        senha.setValor(senhaStr);

        Desenvolvedor *desenvolvedor = new Desenvolvedor();
        desenvolvedor->setMatricula(matricula);
        desenvolvedor->setSenha(senha);

        servico->autenticar(desenvolvedor);
    }catch (invalid_argument &ex){
        cout << "\n[ERRO] " << ex.what() << "\n\n";
        autenticar();
    }
}

void DesenvolvedorCntrl::cadastrar() {
    exibirCabecalho("CADASTRANDO-SE");

    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

    try{
        string matriculaStr = solicitarResposta("Qual a sua matricula?");
        matricula.setValor(matriculaStr);

        string nomeStr = solicitarResposta("Qual o seu nome?");
        nome.setValor(nomeStr);

        string senhaStr = solicitarResposta("Qual a sua senha?");
        senha.setValor(senhaStr);

        string telefoneStr = solicitarResposta("Qual o seu telefone?");
        telefone.setValor(telefoneStr);

        Desenvolvedor *desenvolvedor = new Desenvolvedor();
        desenvolvedor->setMatricula(matricula);
        desenvolvedor->setNome(nome);
        desenvolvedor->setSenha(senha);
        desenvolvedor->setTelefone(telefone);

        servico->cadastrar(desenvolvedor);
    }catch (invalid_argument &ex){
        cout << "\n[ERRO] " << ex.what() << "\n\n";
        cadastrar();
    }
}

void DesenvolvedorCntrl::editar() {
    Desenvolvedor desenvolvedor = servico->getDesenvolvedorLogado();

    exibirCabecalho("EDIÇÃO DA CONTA: " + desenvolvedor.getMatricula().getValor());

    try {
        exibirTexto("Nome: " + desenvolvedor.getNome().getValor());
        string novoNome = solicitarResposta("Informe o novo nome:");
        Texto nome;
        nome.setValor(novoNome);

        exibirTexto("Telefone: " + desenvolvedor.getTelefone().getValor());
        string novoTelefone = solicitarResposta("Informe o novo telefone:");
        Telefone telefone;
        telefone.setValor(novoTelefone);


        exibirTexto("Senha: " + desenvolvedor.getSenha().getValor());
        string novaSenha = solicitarResposta("Informe a nova senha:");
        Senha senha;
        senha.setValor(novaSenha);

        Desenvolvedor novoDesenvolvedor;
        novoDesenvolvedor.setNome(nome);
        novoDesenvolvedor.setTelefone(telefone);
        novoDesenvolvedor.setSenha(senha);

        servico->editar(novoDesenvolvedor);
    }catch (invalid_argument &ex){
        cout << "\n[ERRO] " << ex.what() << "\n\n";
        editar();
    }

}

void DesenvolvedorCntrl::visualizar() {
    Desenvolvedor desenvolvedor = servico->getDesenvolvedorLogado();

    exibirCabecalho("SUAS INFORMAÇÕES");
    exibirTexto("Matrícula: " + desenvolvedor.getMatricula().getValor());
    exibirTexto("Nome: " + desenvolvedor.getNome().getValor());
    exibirTexto("Telefone: " + desenvolvedor.getTelefone().getValor());
    exibirTexto("Senha: " + desenvolvedor.getSenha().getValor());

    solicitarResposta("\n- Para voltar ao Menu Principal digite 'continuar':");
}

void DesenvolvedorCntrl::descadastrar() {
    servico->descadastrar();
}