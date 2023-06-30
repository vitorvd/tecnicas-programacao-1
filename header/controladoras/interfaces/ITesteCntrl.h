#ifndef TECNICAS_PROGRAMACAO_1_ITESTECNTRL_H
#define TECNICAS_PROGRAMACAO_1_ITESTECNTRL_H

#include "../../servicos/interfaces/ITesteServico.h"

class ITesteCntrl {

public:
    virtual void cadastrar() = 0 ;
    virtual void descadastrar() = 0 ;
    virtual void editar() = 0 ;
    virtual void listar() = 0 ;
    virtual void setServico(ITesteServico *) = 0;
    virtual ITesteServico* getServico() = 0;

};


#endif //TECNICAS_PROGRAMACAO_1_ITESTECNTRL_H
