#ifndef TECNICAS_PROGRAMACAO_1_DESENVOLVEDORCNTRL_H
#define TECNICAS_PROGRAMACAO_1_DESENVOLVEDORCNTRL_H

#include "BaseCntrl.h"

#include "../entidades/Desenvolvedor.h"
#include "../servicos/interfaces/IDesenvolvedorServico.h"

class DesenvolvedorCntrl: public BaseCntrl {

public:
    IDesenvolvedorServico *servico;
    void autenticar();
    void cadastrar();
    void editar();
    void visualizar();
    void descadastrar();
    void setServico(IDesenvolvedorServico *);

};

inline void DesenvolvedorCntrl::setServico(IDesenvolvedorServico *servico) {
    this->servico = servico;
}

#endif //TECNICAS_PROGRAMACAO_1_DESENVOLVEDORCNTRL_H
