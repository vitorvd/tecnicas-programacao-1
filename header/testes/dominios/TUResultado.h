#ifndef TRABALHO_TP1_TURESULTADO_H
#define TRABALHO_TP1_TURESULTADO_H

#include "../TUDominio.h"

// 211060737

class TUResultado: public TUDominio {

protected:
    void construir();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    TUEstado run();

};

#endif //TRABALHO_TP1_TURESULTADO_H
