#include "../../header/servicos/CasoTesteServico.h"

#include <random>
#include "set"

void CasoTesteServico::cadastrar(CasoTeste *casoTeste) {
    Codigo codigo = gerarCodigoAleatorio();
    casoTeste->setCodigo(codigo);

    repositorio[codigo.getValor()] = casoTeste;
}

void CasoTesteServico::descadastrar(Codigo codigo) {
    this->repositorio.erase(codigo.getValor());
}

void CasoTesteServico::descadastrarVinculadosAoTeste(Teste teste) {
    set<string> codigosParaRemover;

    for (const auto& par : repositorio) {
        const CasoTeste *casoTeste = par.second;

        if (casoTeste->getTeste().getCodigo().getValor() == teste.getCodigo().getValor())
            codigosParaRemover.insert(par.first);
    }

    for (const string codigo : codigosParaRemover)
        repositorio.erase(codigo);
}

CasoTeste* CasoTesteServico::validarSeCodigoTemCasoTeste(Codigo codigo) {
    auto iterator = repositorio.find(codigo.getValor());
    if(iterator == repositorio.end())
        throw invalid_argument("O código " + codigo.getValor() + " não está associado a nenhum Caso de Teste.");

    return iterator->second;
}

Codigo CasoTesteServico::gerarCodigoAleatorio() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<char> charDist('A', 'Z');
    uniform_int_distribution<char> charDistLower('a', 'z');
    uniform_int_distribution<char> digitDist('0', '9');

    string codigoStr;

    for (int i = 0; i < 3; ++i)
        codigoStr += i % 2 == 0 ? charDist(gen) : charDistLower(gen);

    for (int i = 0; i < 3; ++i)
        codigoStr += digitDist(gen);

    Codigo codigo;
    codigo.setValor(codigoStr);

    return codigo;
}