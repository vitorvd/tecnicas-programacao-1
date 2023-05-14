#ifndef TRABALHO_TP1_CLASSE_H
#define TRABALHO_TP1_CLASSE_H

#include "BaseDominio.h"

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Classe.
///
/// Regras para validação:
///
/// -Classe consiste em um conjunto de palavras (strings) específicas, são elas:
///  "UNIDADE", "INTEGRACAO", "FUMACA", "SISTEMA", "REGRESSAO", "ACEITACAO".
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Classe: public BaseDominio {

protected:
    void validar(string) override;

};

#endif //TRABALHO_TP1_CLASSE_H
