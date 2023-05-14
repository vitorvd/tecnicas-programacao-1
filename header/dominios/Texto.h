#ifndef TRABALHO_TP1_TEXTO_H
#define TRABALHO_TP1_TEXTO_H

#include "BaseDominio.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Texto.
///
/// Regras de validação:
///
/// -Texto consiste em um conjunto entre 10 e 20 caracteres.
/// -O caractere X é letra(A-Z, a-z), dígito(0-9), pontuação(.,;?!:-), especial(@,#,$,%,&).
/// -Não há espaços em branco em sequência.
/// -Não há acentuação.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Texto: public BaseDominio {

private:
    static const string REGEX_PARA_VALIDAR_FORMATO;

protected:
    void validar(string);

};

const string Texto::REGEX_PARA_VALIDAR_FORMATO = "[A-Za-z0-9.,;?!:\\-@#$%&]{10,20}";

#endif //TRABALHO_TP1_TEXTO_H
