#ifndef TECNICAS_PROGRAMACAO_1_MENUCNTRL_H
#define TECNICAS_PROGRAMACAO_1_MENUCNTRL_H

#include "BaseCntrl.h"

class MenuCntrl: public BaseCntrl {

public:
    DesenvolvedorCntrl *desenvolvedorCntrl;
    TesteCntrl *testeCntrl;
    void exibirAutenticarOuCadastrar();
    void exibirMenuEntidades();
    void setDesenvolvedorCntrl(DesenvolvedorCntrl *);

};

inline void MenuCntrl::setDesenvolvedorCntrl(DesenvolvedorCntrl *desenvolvedorCntrl) {
    this->desenvolvedorCntrl = desenvolvedorCntrl;
}

#endif //TECNICAS_PROGRAMACAO_1_MENUCNTRL_H
