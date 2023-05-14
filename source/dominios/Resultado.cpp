#include "../../header/dominios/Resultado.h"

using namespace std;

// 211060737 e 200019473

void Resultado::validar(string resultado){
    if((resultado != "APROVADO") && (resultado != "REPROVADO"))
        throw invalid_argument("O valor informado para Resultado é inválido.\n- Os valores possíveis são: APROVADO, REPROVADO");
};