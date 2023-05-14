#include <regex>
#include "../../header/dominios/Telefone.h"

using namespace std;

// 211060737 e 200019473

void Telefone::validar(string telefone){
    regex regexValidarFormato(this->REGEX_PARA_VALIDAR_FORMATO);

    if(!regex_match(telefone, regexValidarFormato))
        throw invalid_argument("O formato do Telefone está incorreto. O padrão é +XXXXXXX (7 dígitos) até 15 dígitos.");
}