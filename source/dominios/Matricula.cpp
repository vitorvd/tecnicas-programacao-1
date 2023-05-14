#include <regex>
#include <string>
#include "../../header/dominios/Matricula.h"

using namespace std;

// 211060737

void Matricula::validar(string matricula){
    regex regexValidarFormato(this->REGEX_PARA_VALIDAR_FORMATO);

    if(!regex_match(matricula, regexValidarFormato))
        throw invalid_argument("O formato da Matricula é inválido. O formato esperado é DDDDDDX.\n- Onde 'D' são algarismos (0-9).\n- Onde X é o digito verificador, que é um algarismo.");

    validarDigitoVerificador(matricula);
}

// 211060737

void Matricula::validarDigitoVerificador(string matricula) {
    string digitoVerificadorString(1, matricula.at(6));
    int digitoVerificadorInformado = stoi(digitoVerificadorString);

    int somatorioAlgorismosMatricula = 0;
    for(int i = 0; i < matricula.length() - 1; i++) {
        string algorismo(1, matricula.at(i));
        somatorioAlgorismosMatricula += stoi(algorismo);
    }

    int digitoVerificadorCalculado = somatorioAlgorismosMatricula % MODULO_DIGITO_VERIFICADOR;

    if(digitoVerificadorInformado != digitoVerificadorCalculado)
        throw invalid_argument("O 'Digito Verificador' da Matricula está incorreto.");
}