#include <regex>
#include "../../header/dominios/Codigo.h"

using namespace std;

// 211060737 e 200019473

void Codigo::validar(string codigo) {
    regex regexValidarFormato(this->REGEX_PARA_VALIDAR_FORMATO);

    if(!regex_match(codigo, regexValidarFormato))
        throw invalid_argument("O formato do Codigo é inválido. O formato esperado é LLLDDD.");
}