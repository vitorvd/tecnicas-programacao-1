#ifndef TRABALHO_TP1_TUCASOTESTE_H
#define TRABALHO_TP1_TUCASOTESTE_H

#include "../TUBase.h"

// 211060737 e 200019473

class TUCasoTeste: public TUBase {

protected:
    CasoTeste *entidade;
    void construir();
    void testarCenarioSucesso();
    void destruir();

public:
    TUEstado run();

};

inline void TUCasoTeste::destruir() {
    delete entidade;
}

#endif //TRABALHO_TP1_TUCASOTESTE_H
