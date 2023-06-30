#ifndef TECNICAS_PROGRAMACAO_1_ITESTESERVICO_H
#define TECNICAS_PROGRAMACAO_1_ITESTESERVICO_H

#include "../../entidades/Teste.h"
#include "ICasoTesteServico.h"

class ITesteServico {

private:
    virtual Codigo gerarCodigoAleatorio() = 0;

public:
    virtual void cadastrar(Teste *) = 0;
    virtual void descadastrar(Codigo codigo) = 0;
    virtual void descadastrarVinculadosAoDesenvolvedor(Desenvolvedor) = 0;
    virtual Teste* validarSeCodigoTemTeste(Codigo) = 0;
    virtual map<string, Teste*> getRepositorio() = 0;
    virtual void setCasoTesteServico(ICasoTesteServico *) = 0;
    virtual ICasoTesteServico* getCasoTesteServico() = 0;
    virtual void setDesenvolvedorServico(IDesenvolvedorServico *) = 0;
    virtual IDesenvolvedorServico* getDesenvolvedorServico() = 0;

};

#endif //TECNICAS_PROGRAMACAO_1_ITESTESERVICO_H
