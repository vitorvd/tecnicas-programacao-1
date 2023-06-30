#ifndef TECNICAS_PROGRAMACAO_1_TESTESERVICO_H
#define TECNICAS_PROGRAMACAO_1_TESTESERVICO_H

#include "interfaces/ITesteServico.h"
#include <map>

class TesteServico : public ITesteServico {

private:
    IDesenvolvedorServico *desenvolvedorServico;
    ICasoTesteServico *casoTesteServico;
    map<string, Teste*> repositorio;
    Codigo gerarCodigoAleatorio();

public:
    void cadastrar(Teste *teste);
    void descadastrar(Codigo codigo);
    void descadastrarVinculadosAoDesenvolvedor(Desenvolvedor);
    Teste* validarSeCodigoTemTeste(Codigo codigo);
    map<string, Teste*> getRepositorio();
    void setCasoTesteServico(ICasoTesteServico *casoTesteServico);
    ICasoTesteServico* getCasoTesteServico();
    void setDesenvolvedorServico(IDesenvolvedorServico *);
    IDesenvolvedorServico* getDesenvolvedorServico();

};

inline void TesteServico::setCasoTesteServico(ICasoTesteServico *casoTesteServico) {
    this->casoTesteServico = casoTesteServico;
}

inline ICasoTesteServico* TesteServico::getCasoTesteServico() {
    return this->casoTesteServico;
}

inline IDesenvolvedorServico* TesteServico::getDesenvolvedorServico() {
    return desenvolvedorServico;
}

inline void TesteServico::setDesenvolvedorServico(IDesenvolvedorServico *desenvolvedorServico) {
    this->desenvolvedorServico = desenvolvedorServico;
}

#endif //TECNICAS_PROGRAMACAO_1_TESTESERVICO_H
