#ifndef TRABALHO_TP1_TELEFONE_H
#define TRABALHO_TP1_TELEFONE_H

#include "BaseDominio.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Telefone.
///
/// Regras para validação:
///
/// -Telefone consiste em conjunto de dígitos, variando de 7 a 15 dígitos.
/// -Formato +XXXXXXX (caso mínimo) a +XXXXXXXXXXXXXXX (caso máximo).
/// -X é dígito (0-9).
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Telefone: public BaseDominio {

private:
    static const string REGEX_PARA_VALIDAR_FORMATO;

protected:
    void validar(string);

};

const string Telefone::REGEX_PARA_VALIDAR_FORMATO = "\\+(?:\\d{7,15})";

#endif //TRABALHO_TP1_TELEFONE_H
