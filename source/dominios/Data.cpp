#include <regex>
#include <sstream>
#include "../../header/dominios/Data.h"

using namespace std;

// 211060737

bool isDiaValido(int dia, string mes, bool isBissexto) {
    if (mes == "FEV") {
        if (isBissexto)
            return dia <= 29;

        return dia <= 28;
    } else if (mes == "ABR" || mes == "JUN" || mes == "SET" || mes == "NOV") {
        return dia <= 30;
    } else {
        return dia <= 31;
    }
}

// 211060737

void Data::validar(string data) {
    regex regexValidarFormato(this->REGEX_PARA_VALIDAR_FORMATO);

    if(!regex_match(data, regexValidarFormato))
        throw invalid_argument("O formato da Data é inválido. Tente algo como '15/MAI/2002'.\n- Os valores possíveis para o mês são: JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ.\n- O intervalo do ano deve ser entre 2000 até 2999.");

    //Convertendo (por split) a Data de "15/MAI/2002" para os atributos dia, mes e ano
    parserData(data);

    bool isBissexto = (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;

    bool diaValido = isDiaValido(dia, mes, isBissexto);

    if(!diaValido)
        throw invalid_argument("O formato da Data é inválido. O problema é devido ao ano bissexto, provavelmetne há um dia que não é valido pro mês e ano.");
}

// 211060737

void Data::parserData(string data) {
    stringstream ss(data);
    string diaString, anoString;
    getline(ss, diaString, '/');
    getline(ss, mes, '/');
    getline(ss, anoString);

    dia = stoi(diaString);
    ano = stoi(anoString);
}
