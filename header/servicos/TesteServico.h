#ifndef TECNICAS_PROGRAMACAO_1_TESTESERVICO_H
#define TECNICAS_PROGRAMACAO_1_TESTESERVICO_H

#include "interfaces/ITesteServico.h"
#include <map>

class TesteServico : public ITesteServico {

private:
    IDesenvolvedorServico *desenvolvedorServico;
    map<string, Teste*> repositorio;
    Codigo gerarCodigoAleatorio();

public:
    void cadastrar(Teste *teste);
    void descadastrar(Codigo codigo);
    void descadastrarVinculadosAoDesenvolvedor(Desenvolvedor);
    Teste* validarSeCodigoTemTeste(Codigo codigo);
    map<string, Teste*> getRepositorio();
    void setDesenvolvedorServico(IDesenvolvedorServico *);
    IDesenvolvedorServico* getDesenvolvedorServico();

};

inline IDesenvolvedorServico* TesteServico::getDesenvolvedorServico() {
    return desenvolvedorServico;
}

inline void TesteServico::setDesenvolvedorServico(IDesenvolvedorServico *desenvolvedorServico) {
    this->desenvolvedorServico = desenvolvedorServico;
}

#endif //TECNICAS_PROGRAMACAO_1_TESTESERVICO_H
