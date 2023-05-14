#include <regex>
#include "../../header/dominios/Texto.h"

using namespace std;

// 211060737 e 200019473

void Texto::validar(string texto){
    regex regexValidarFormato(this->REGEX_PARA_VALIDAR_FORMATO);

    if(!regex_match(texto, regexValidarFormato))
        throw invalid_argument("O formato do Texto está incorreto. O padrão é de 10 a 20 caracteres, onde é aceito alfanúmericos, sinais de pontuação, @ , #, $ , % ou &.");
}