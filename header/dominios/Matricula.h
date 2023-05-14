#ifndef TRABALHO_TP1_MATRICULA_H
#define TRABALHO_TP1_MATRICULA_H

#include "BaseDominio.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Matrícula.
///
/// Regras para validação:
///
/// -Matrícula composta por 7 dígitos, sendo o último um dígito verificador.
/// -Formato DDDDDDX.
/// -D é um dígito (0-9).
/// -X é um dígito verificador calculado com módulo de 10.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Matricula: public BaseDominio {

protected:
    static const int MODULO_DIGITO_VERIFICADOR = 10;
    static const string REGEX_PARA_VALIDAR_FORMATO;
    void validar(string);
    void validarDigitoVerificador(string);

};

const string Matricula::REGEX_PARA_VALIDAR_FORMATO = "\\d{7}";

#endif //TRABALHO_TP1_MATRICULA_H
