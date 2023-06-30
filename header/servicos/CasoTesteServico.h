#ifndef TECNICAS_PROGRAMACAO_1_CASOTESTESERVICO_H
#define TECNICAS_PROGRAMACAO_1_CASOTESTESERVICO_H

#include "interfaces/ICasoTesteServico.h"
#include <map>

class CasoTesteServico : public ICasoTesteServico {

private:
    map<string, CasoTeste*> repositorio;
    Codigo gerarCodigoAleatorio();

public:
    CasoTesteServico();
    void cadastrar(CasoTeste *);
    void descadastrar(Codigo codigo);
    void descadastrarVinculadosAoTeste(Teste);
    CasoTeste* validarSeCodigoTemCasoTeste(Codigo);
    map<string, CasoTeste*> getRepositorio();

};

inline CasoTesteServico::CasoTesteServico() {

}

inline map<string, CasoTeste*> CasoTesteServico::getRepositorio() {
    return repositorio;
}

#endif //TECNICAS_PROGRAMACAO_1_CASOTESTESERVICO_H
