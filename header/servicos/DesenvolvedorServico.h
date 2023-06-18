#ifndef TECNICAS_PROGRAMACAO_1_DESENVOLVEDORSERVICO_H
#define TECNICAS_PROGRAMACAO_1_DESENVOLVEDORSERVICO_H

#include "interfaces/IDesenvolvedorServico.h"
#include <map>

class DesenvolvedorServico: public IDesenvolvedorServico {

private:
    map<string, Desenvolvedor*> repositorio;
    Desenvolvedor *desenvolvedorLogado;

public:
    DesenvolvedorServico();
    void autenticar(Desenvolvedor *);
    void cadastrar(Desenvolvedor *);
    void editar(Desenvolvedor);
    void descadastrar();
    Desenvolvedor getDesenvolvedorLogado();

};

DesenvolvedorServico::DesenvolvedorServico() {
    this->desenvolvedorLogado = new Desenvolvedor();

    //Usuário Admin Padrão
    Desenvolvedor *entidade = new Desenvolvedor();

    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

    matricula.setValor("1234561");
    nome.setValor("VitorVersiani");
    senha.setValor("123456");
    telefone.setValor("+619123456789");

    entidade->setMatricula(matricula);
    entidade->setNome(nome);
    entidade->setSenha(senha);
    entidade->setTelefone(telefone);

    repositorio[matricula.getValor()] = entidade;
}

inline Desenvolvedor DesenvolvedorServico::getDesenvolvedorLogado() {
    return *this->desenvolvedorLogado;
}

#endif //TECNICAS_PROGRAMACAO_1_DESENVOLVEDORSERVICO_H
