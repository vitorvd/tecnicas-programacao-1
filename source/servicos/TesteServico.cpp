#include "../../header/servicos/TesteServico.h"

#include <random>
#include "set"

void TesteServico::cadastrar(Teste *teste) {
    Codigo codigo = gerarCodigoAleatorio();
    teste->setCodigo(codigo);

    Desenvolvedor desenvolvedor = desenvolvedorServico->getDesenvolvedorLogado();
    teste->setDesenvolvedor(desenvolvedor);

    repositorio[codigo.getValor()] = teste;
}

void TesteServico::descadastrar(Codigo codigo) {
    Teste teste = *this->getRepositorio()[codigo.getValor()];
    this->getCasoTesteServico()->descadastrarVinculadosAoTeste(teste);

    this->repositorio.erase(codigo.getValor());
}

void TesteServico::descadastrarVinculadosAoDesenvolvedor(Desenvolvedor desenvolvedor) {
    set<string> codigosParaRemover;

    for (const auto& par : repositorio) {
        const Teste *teste = par.second;

        if (teste->getDesenvolvedor().getMatricula().getValor() == desenvolvedor.getMatricula().getValor()) {
            this->getCasoTesteServico()->descadastrarVinculadosAoTeste(*teste); //descadastrando casos de testes
            codigosParaRemover.insert(par.first);
        }
    }

    for (const string codigo : codigosParaRemover)
        repositorio.erase(codigo);
}

Teste* TesteServico::validarSeCodigoTemTeste(Codigo codigo) {
    auto iterator = repositorio.find(codigo.getValor());
    if(iterator == repositorio.end())
        throw invalid_argument("O código " + codigo.getValor() + " não está associado a nenhum Teste.");

    return iterator->second;
}

Codigo TesteServico::gerarCodigoAleatorio() {
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

map<string, Teste*> TesteServico::getRepositorio() {
    return repositorio;
}