#ifndef TECNICAS_PROGRAMACAO_1_CASOTESTECNTRL_H
#define TECNICAS_PROGRAMACAO_1_CASOTESTECNTRL_H

#include "BaseCntrl.h"
#include "../servicos/interfaces/ICasoTesteServico.h"
#include "../servicos/interfaces/ITesteServico.h"
#include "../servicos/interfaces/IDesenvolvedorServico.h"
#include "interfaces/ICasoTesteCntrl.h"

class CasoTesteCntrl: public ICasoTesteCntrl, public BaseCntrl {

private:
    ICasoTesteServico *servico;
    ITesteServico *testeServico;
    IDesenvolvedorServico *desenvolvedorServico;
    int exibirTestes();

public:
    void cadastrar();
    void editar();
    void listar();
    void descadastrar();
    void setServico(ICasoTesteServico *servico);
    ICasoTesteServico* getServico();
    void setTesteServico(ITesteServico *testeServico);
    ITesteServico* getTesteServico();
    void setDesenvolvedorServico(IDesenvolvedorServico *desenvolvedorServico);
    IDesenvolvedorServico* getDesenvolvedorServico();

};

inline void CasoTesteCntrl::setServico(ICasoTesteServico *servico) {
    this->servico = servico;
}

inline ICasoTesteServico* CasoTesteCntrl::getServico() {
    return this->servico;
}

inline void CasoTesteCntrl::setTesteServico(ITesteServico *testeServico) {
    this->testeServico = testeServico;
}

inline ITesteServico* CasoTesteCntrl::getTesteServico() {
    return this->testeServico;
}

inline void CasoTesteCntrl::setDesenvolvedorServico(IDesenvolvedorServico *desenvolvedorServico) {
    this->desenvolvedorServico = desenvolvedorServico;
}

inline IDesenvolvedorServico* CasoTesteCntrl::getDesenvolvedorServico() {
    return this->desenvolvedorServico;
}

#endif //TECNICAS_PROGRAMACAO_1_CASOTESTECNTRL_H
