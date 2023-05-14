#ifndef TRABALHO_TP1_TUESTADO_H
#define TRABALHO_TP1_TUESTADO_H

#include "string"
using namespace std;

// 211060737 e 200019473

class TUEstado {

private:
    string mensagemCenarioFalha;
    bool estadoCenarioFalha;
    bool estadoCenarioSucesso;

public:
    void setMensagemCenarioFalha(string);
    string getMensagemCenarioFalha();
    void setEstadoCenarioFalha(bool);
    bool getEstadoCenarioFalha();
    void setEstadoCenarioSucesso(bool);
    bool getEstadoCenarioSucesso();


};

inline void TUEstado::setMensagemCenarioFalha(string mensagem){
    mensagemCenarioFalha = mensagem;
}

inline string TUEstado::getMensagemCenarioFalha(){
    return mensagemCenarioFalha;
}

inline void TUEstado::setEstadoCenarioFalha(bool estado){
    estadoCenarioFalha = estado;
}

inline bool TUEstado::getEstadoCenarioFalha(){
    return estadoCenarioFalha;
}

inline void TUEstado::setEstadoCenarioSucesso(bool estado){
    estadoCenarioSucesso = estado;
}

inline bool TUEstado::getEstadoCenarioSucesso(){
    return estadoCenarioSucesso;
}

#endif //TRABALHO_TP1_TUESTADO_H
