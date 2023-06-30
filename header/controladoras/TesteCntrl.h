#ifndef TECNICAS_PROGRAMACAO_1_TESTECNTRL_H
#define TECNICAS_PROGRAMACAO_1_TESTECNTRL_H

#include "BaseCntrl.h"

#include "../servicos/interfaces/ITesteServico.h"
#include "interfaces/ITesteCntrl.h"

class TesteCntrl: public ITesteCntrl, public BaseCntrl {

private:
    int exibirTestes();

public:
    ITesteServico *servico;
    void cadastrar();
    void descadastrar();
    void editar();
    void listar();
    void setServico(ITesteServico *servico);
    ITesteServico* getServico();

};

inline ITesteServico* TesteCntrl::getServico() {
    return servico;
}

inline void TesteCntrl::setServico(ITesteServico *servico) {
    this->servico = servico;
}

#endif //TECNICAS_PROGRAMACAO_1_TESTECNTRL_H