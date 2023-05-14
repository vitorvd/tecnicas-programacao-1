#ifndef TRABALHO_TP1_TUCODIGO_H
#define TRABALHO_TP1_TUCODIGO_H

#include "../TUDominio.h"

// 211060737

class TUCodigo: public TUDominio {

protected:
    void construir();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    TUEstado run();

};

#endif //TRABALHO_TP1_TUCODIGO_H
