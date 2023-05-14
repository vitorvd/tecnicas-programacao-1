#ifndef TRABALHO_TP1_TUDATA_H
#define TRABALHO_TP1_TUDATA_H

#include "../TUDominio.h"

// 211060737

class TUData: public TUDominio {

protected:
    void construir();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    TUEstado run();

};

#endif //TRABALHO_TP1_TUDATA_H
