#include "../../header/servicos/DesenvolvedorServico.h"

void DesenvolvedorServico::autenticar(Desenvolvedor *entidade) {
    auto iterator = repositorio.find(entidade->getMatricula().getValor());
    if(iterator == repositorio.end())
        throw invalid_argument("Matrícula fornecida não está associada a nenhum desenvolvedor");

    Desenvolvedor *entidadeEncontrada = iterator->second;
    if(entidade->getSenha().getValor() != entidadeEncontrada->getSenha().getValor())
        throw invalid_argument("A senha não está correta.");

    desenvolvedorLogado = entidadeEncontrada;
}

void DesenvolvedorServico::cadastrar(Desenvolvedor *entidade) {
    if(repositorio.find(entidade->getMatricula().getValor()) != repositorio.end())
        throw invalid_argument("O desenvolvedor com a matrícula " + entidade->getMatricula().getValor() + " já existe.");

    repositorio[entidade->getMatricula().getValor()] = entidade;
}

void DesenvolvedorServico::editar(Desenvolvedor desenvolvedor) {
    if(desenvolvedor.getNome().getValor().length() > 0)
        desenvolvedorLogado->setNome(desenvolvedor.getNome());

    if(desenvolvedor.getTelefone().getValor().length() > 0)
        desenvolvedorLogado->setTelefone(desenvolvedor.getTelefone());

    if(desenvolvedor.getSenha().getValor().length() > 0)
        desenvolvedorLogado->setSenha(desenvolvedor.getSenha());
}

void DesenvolvedorServico::descadastrar() {
    repositorio.erase(getDesenvolvedorLogado().getMatricula().getValor());
    delete desenvolvedorLogado;
}