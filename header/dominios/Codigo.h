#ifndef TRABALHO_TP1_CODIGO_H
#define TRABALHO_TP1_CODIGO_H
#include "BaseDominio.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Código.
///
/// Regras para validação:
/// 
/// -Código composto por 3 letras e 3 dígitos.
/// -Formato LLLDDD.
/// -L é uma letra (A-Z, a-z).
/// -D é um dígito (0-9).
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Codigo: public BaseDominio {

private:
    static const string REGEX_PARA_VALIDAR_FORMATO;

protected:
    void validar(string);

};

const string Codigo::REGEX_PARA_VALIDAR_FORMATO = "[A-Za-z]{3}\\d{3}";

#endif //TRABALHO_TP1_CODIGO_H
