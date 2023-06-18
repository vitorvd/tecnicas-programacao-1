#ifndef TECNICAS_PROGRAMACAO_1_TESTECNTRL_H
#define TECNICAS_PROGRAMACAO_1_TESTECNTRL_H

#include "BaseCntrl.h"

#include "../servicos/interfaces/ITesteServico.h"

class TesteCntrl: public BaseCntrl {

private:
    int exibirTestes();

public:
    ITesteServico *servico;
    void cadastrar();
    void descadastrar();
    void editar();
    void listar();

};

#endif //TECNICAS_PROGRAMACAO_1_TESTECNTRL_H