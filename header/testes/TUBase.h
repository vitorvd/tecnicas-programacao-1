#ifndef TRABALHO_TP1_BASETESTEUNITARIO_H
#define TRABALHO_TP1_BASETESTEUNITARIO_H

#include "../dominios/BaseDominio.h"
#include "TUEstado.h"

using namespace std;

// 211060737 e 200019473

class TUBase {

protected:
    TUEstado *estado;
    virtual void construir() = 0;
    virtual void testarCenarioSucesso() = 0;
    virtual void destruir() = 0;

public:
    virtual TUEstado run() = 0;

};

#endif //TRABALHO_TP1_BASETESTEUNITARIO_H
