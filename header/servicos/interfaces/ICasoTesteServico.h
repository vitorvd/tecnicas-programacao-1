#ifndef TECNICAS_PROGRAMACAO_1_ICASOTESTESERVICO_H
#define TECNICAS_PROGRAMACAO_1_ICASOTESTESERVICO_H

#include "../../entidades/Teste.h"
#include "../../entidades/CasoTeste.h"
#include <map>

class ICasoTesteServico {

public:
    virtual void cadastrar(CasoTeste *) = 0;
    virtual void descadastrar(Codigo codigo) = 0;
    virtual void descadastrarVinculadosAoTeste(Teste) = 0;
    virtual CasoTeste* validarSeCodigoTemCasoTeste(Codigo) = 0;
    virtual map<string, CasoTeste*> getRepositorio() = 0;

};


#endif //TECNICAS_PROGRAMACAO_1_ICASOTESTESERVICO_H
