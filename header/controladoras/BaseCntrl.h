#ifndef TECNICAS_PROGRAMACAO_1_INPUTCNTRL_H
#define TECNICAS_PROGRAMACAO_1_INPUTCNTRL_H

#include "iostream"
#include "string"

class BaseCntrl {

protected:
    void exibirTexto(string);
    void exibirCabecalho(string);
    string solicitarResposta(string);
    int exibirMenu(string, string[], int);

};

inline void BaseCntrl::exibirTexto(string texto) {
    cout << texto + "\n";
}

inline void BaseCntrl::exibirCabecalho(string texto) {
    exibirTexto("** " + texto + " **\n");
}

inline string BaseCntrl::solicitarResposta(string pergunta) {
    string resposta;
    cout << pergunta << " ";
    cin >> resposta;
    return resposta;
}

inline int BaseCntrl::exibirMenu(string cabecalho, string *opcoes, int tamanho) {
    exibirCabecalho(cabecalho);

    int contadorOpcoes = 1;
    for (int i = 0; i < tamanho; i++) {
        cout << "[" << contadorOpcoes << "] - " << opcoes[i] << "\n";
        contadorOpcoes++;
    }

    string opcao = solicitarResposta("\nInforme qual a opção desejada:");

    return stoi(opcao);
}

#endif //TECNICAS_PROGRAMACAO_1_INPUTCNTRL_H
