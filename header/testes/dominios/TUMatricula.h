#ifndef TRABALHO_TP1_TUMATRICULA_H
#define TRABALHO_TP1_TUMATRICULA_H

#include "../TUDominio.h"

// 211060737

class TUMatricula: public TUDominio {

protected:
    void construir();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    TUEstado run();

};

#endif //TRABALHO_TP1_TUMATRICULA_H
