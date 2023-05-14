#include <regex>
#include <list>
#include <algorithm>
#include <string>
#include "../../header/dominios/Senha.h"

using namespace std;

// 211060737 e 200019473

void Senha::validar(string senha){
    regex regexValidarFormato(this->REGEX_PARA_VALIDAR_FORMATO);

    if(!regex_match(senha, regexValidarFormato))
        throw invalid_argument("O formato de Senha está incorreto. O padrão é XXXXXX, onde é aceito letras, números, @ , #, $ , % ou &; Além de não poder ter item repetido.");

    list<char> caracteres;
    for(char caractere : senha) {
        if (find(caracteres.begin(), caracteres.end(), caractere) != caracteres.end())
            throw invalid_argument("O formato de Senha está incorreto. Você não pode repetir nenhum caracter.");

        caracteres.push_back(caractere);
    }
}