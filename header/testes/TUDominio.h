#ifndef TRABALHO_TP1_TUDOMINIO_H
#define TRABALHO_TP1_TUDOMINIO_H

#include "TUBase.h"
#include "TUEstado.h"

using namespace std;

// 211060737 e 200019473

class TUDominio: public TUBase {

protected:
    BaseDominio *dominio;
    virtual void construir() = 0;
    virtual void testarCenarioSucesso() = 0;
    virtual void testarCenarioFalha() = 0;
    void destruir();
    void runTestes();

public:
    virtual TUEstado run() = 0;

};

inline void TUDominio::runTestes() {
    try {
        testarCenarioSucesso();
        estado->setEstadoCenarioSucesso(true);
    }catch(invalid_argument &ex){
        estado->setEstadoCenarioSucesso(false);
    }

    try {
        testarCenarioFalha();
        estado->setEstadoCenarioFalha(true);
    }catch(invalid_argument &ex){
        estado->setEstadoCenarioFalha(false);
        estado->setMensagemCenarioFalha(ex.what());
    }
}

inline void TUDominio::destruir() {
    delete dominio;
}

#endif //TRABALHO_TP1_TUDOMINIO_H
