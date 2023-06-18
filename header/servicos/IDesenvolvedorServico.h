#ifndef TECNICAS_PROGRAMACAO_1_IDESENVOLVEDORSERVICO_H
#define TECNICAS_PROGRAMACAO_1_IDESENVOLVEDORSERVICO_H

#include "../entidades/Desenvolvedor.h"

class IDesenvolvedorServico {

public:
    virtual void autenticar(Desenvolvedor *) = 0;
    virtual void cadastrar(Desenvolvedor *) = 0;
    virtual void editar(Desenvolvedor) = 0;
    virtual void descadastrar() = 0;
    virtual Desenvolvedor getDesenvolvedorLogado() = 0;

};

#endif //TECNICAS_PROGRAMACAO_1_IDESENVOLVEDORSERVICO_H
