#ifndef TRABALHO_TP1_SENHA_H
#define TRABALHO_TP1_SENHA_H

#include "BaseDominio.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Senha.
///
/// Regras para validação:
///
/// -Senha é composta por 6 caracteres.
/// -Formato XXXXXX.
/// -X é um caractere, podendo ser: letra(A-Z, a-z), dígito(0-9), especial(@, #, $, %, &).
/// -Não são permitidos caracteres duplicados.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Senha: public BaseDominio {

private:
    static const string REGEX_PARA_VALIDAR_FORMATO;

protected:
    void validar(string);

};

const string Senha::REGEX_PARA_VALIDAR_FORMATO = "[a-zA-Z0-9@#$%&]{6}";

#endif //TRABALHO_TP1_SENHA_H
