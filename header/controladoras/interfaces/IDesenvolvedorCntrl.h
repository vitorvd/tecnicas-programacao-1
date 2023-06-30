#ifndef TECNICAS_PROGRAMACAO_1_IDESENVOLVEDORCNTRL_H
#define TECNICAS_PROGRAMACAO_1_IDESENVOLVEDORCNTRL_H

#include "../../servicos/interfaces/IDesenvolvedorServico.h"

class IDesenvolvedorCntrl {

public:
    virtual void autenticar() = 0 ;
    virtual void cadastrar() = 0 ;
    virtual void editar() = 0 ;
    virtual void visualizar() = 0 ;
    virtual void descadastrar() = 0 ;
    virtual IDesenvolvedorServico* getServico() = 0 ;
    virtual void setServico(IDesenvolvedorServico *) = 0 ;

};

#endif //TECNICAS_PROGRAMACAO_1_IDESENVOLVEDORCNTRL_H
