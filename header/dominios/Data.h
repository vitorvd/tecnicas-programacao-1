#ifndef TRABALHO_TP1_DATA_H
#define TRABALHO_TP1_DATA_H

#include "BaseDominio.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para adição de Data.
///
/// Regras para validação:
///
/// -Data composta por dia, mês e ano.
/// -DIA consiste em um número, MES consiste em uma string e ANO consiste em um número.
/// -Formato DIA/MES/ANO.
/// -DIA - (1-31).
/// -MES - "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ".
/// -ANO - (2000-2999).
/// -Anos bissextos são levados em consideração.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Data: public BaseDominio {

private:
    int dia, ano;
    string mes;
    void parserData(string);

protected:
    static const string REGEX_PARA_VALIDAR_FORMATO;
    void validar(string);

};

const string Data::REGEX_PARA_VALIDAR_FORMATO = "(0?[1-9]|[1-2][0-9]|3[0-1])\\/(JAN|FEV|MAR|ABR|MAI|JUN|JUL|AGO|SET|OUT|NOV|DEZ)\\/(20\\d{2}|2[1-9]\\d{2})";

#endif //TRABALHO_TP1_DATA_H
