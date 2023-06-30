#ifndef TECNICAS_PROGRAMACAO_1_ICASOTESTECNTRL_H
#define TECNICAS_PROGRAMACAO_1_ICASOTESTECNTRL_H

#include "../../servicos/interfaces/ICasoTesteServico.h"
#include "../../servicos/interfaces/ITesteServico.h"
#include "../../servicos/interfaces/IDesenvolvedorServico.h"

class ICasoTesteCntrl {

public:
    virtual void cadastrar() = 0;
    virtual void editar() = 0;
    virtual void listar() = 0;
    virtual void descadastrar() = 0;
    virtual void setServico(ICasoTesteServico *) = 0;
    virtual ICasoTesteServico* getServico() = 0;
    virtual void setTesteServico(ITesteServico *) = 0;
    virtual ITesteServico* getTesteServico() = 0;
    virtual void setDesenvolvedorServico(IDesenvolvedorServico *) = 0;
    virtual IDesenvolvedorServico* getDesenvolvedorServico() = 0;

};

#endif //TECNICAS_PROGRAMACAO_1_ICASOTESTECNTRL_H
