#ifndef TRABALHO_TP1_RESULTADO_H
#define TRABALHO_TP1_RESULTADO_H

#include "BaseDominio.h"

using namespace std;

// ----------------------------------------------------------------------------------------- 
/// Padrão para adição de Resultado.
///
/// Regras para validação:
///
/// -Resultado consiste em um conjunto de duas palavras (strings) específicas, são elas:
///  "APROVADO", "REPROVADO"
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Resultado: public BaseDominio {

protected:
    void validar(string);

};


#endif //TRABALHO_TP1_RESULTADO_H
