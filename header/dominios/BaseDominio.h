#ifndef TRABALHO_TP1_BASEDOMINIO_H
#define TRABALHO_TP1_BASEDOMINIO_H

#include <stdexcept>

using namespace std;

// 211060737 e 200019473

class BaseDominio {

protected:
    string valor;

    /// Validar o valor.
    /// @param  valor
    virtual void validar(string) = 0;

public:

    /// Atribui um valor à variável.
    /// @param  valor
    void setValor(string);

    /// Retorna o valor armazenado na variável.
    /// @return valor
    string getValor();

};

inline string BaseDominio::getValor() {
    return valor;
};

inline void BaseDominio::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

#endif //TRABALHO_TP1_BASEDOMINIO_H
