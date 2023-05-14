#ifndef TRABALHO_TP1_TUDESENVOLVEDOR_H
#define TRABALHO_TP1_TUDESENVOLVEDOR_H

#include "../TUBase.h"
#include "../../entidades/Desenvolvedor.h"

// 211060737 e 200019473

class TUDesenvolvedor: public TUBase {

protected:
    Desenvolvedor *entidade;
    void construir();
    void testarCenarioSucesso();
    void destruir();

public:
    TUEstado run();

};

inline void TUDesenvolvedor::destruir() {
    delete entidade;
}

#endif //TRABALHO_TP1_TUDESENVOLVEDOR_H
