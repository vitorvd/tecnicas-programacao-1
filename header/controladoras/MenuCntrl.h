#ifndef TECNICAS_PROGRAMACAO_1_MENUCNTRL_H
#define TECNICAS_PROGRAMACAO_1_MENUCNTRL_H

#include "BaseCntrl.h"
#include "CasoTesteCntrl.h"
#include "interfaces/ITesteCntrl.h"

class MenuCntrl: public BaseCntrl {

public:
    IDesenvolvedorCntrl *desenvolvedorCntrl;
    ITesteCntrl *testeCntrl;
    CasoTesteCntrl *casoTesteCntrl;
    void exibirAutenticarOuCadastrar();
    void exibirMenuEntidades();

};

#endif //TECNICAS_PROGRAMACAO_1_MENUCNTRL_H
