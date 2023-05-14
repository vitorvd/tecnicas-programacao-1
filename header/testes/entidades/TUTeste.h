#ifndef TRABALHO_TP1_TUTESTE_H
#define TRABALHO_TP1_TUTESTE_H

#include "../TUBase.h"
#include "../../entidades/Teste.h"

// 211060737 e 200019473

class TUTeste: public TUBase {

protected:
    Teste *entidade;
    void construir();
    void testarCenarioSucesso();
    void destruir();

public:
    TUEstado run();

};

inline void TUTeste::destruir() {
    delete entidade;
}

#endif //TRABALHO_TP1_TUTESTE_H
