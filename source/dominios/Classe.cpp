#include "../../header/dominios/Classe.h"

using namespace std;

// 211060737 e 200019473

void Classe::validar(string classe){
    if((classe != "UNIDADE") && (classe != "INTEGRACAO") && (classe != "FUMACA") && (classe != "SISTEMA") && (classe != "REGRESSAO") && (classe != "ACEITACAO"))
        throw invalid_argument("O valor informado para Classe é inválido.\n- Os valores possíveis são: UNIDADE, INTEGRACAO, FUMACA, SISTEMA, REGRESSAO ou ACEITACAO.");
};