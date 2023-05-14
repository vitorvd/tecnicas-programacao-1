#include "source/dominios/Classe.cpp"
#include "source/testes/dominios/TUClasse.cpp"
#include "source/dominios/Codigo.cpp"
#include "source/testes/dominios/TUCodigo.cpp"
#include "source/dominios/Data.cpp"
#include "source/testes/dominios/TUData.cpp"
#include "source/dominios/Matricula.cpp"
#include "source/testes/dominios/TUMatricula.cpp"
#include "source/dominios/Resultado.cpp"
#include "source/testes/dominios/TUResultado.cpp"
#include "source/dominios/Senha.cpp"
#include "source/testes/dominios/TUSenha.cpp"
#include "source/dominios/Telefone.cpp"
#include "source/testes/dominios/TUTelefone.cpp"
#include "source/dominios/Texto.cpp"
#include "source/testes/dominios/TUTexto.cpp"

#include "header/entidades/CasoTeste.h"
#include "source/testes/entidades/TUCasoTeste.cpp"
#include "header/entidades/Desenvolvedor.h"
#include "source/testes/entidades/TUDesenvolvedor.cpp"
#include "header/entidades/Teste.h"
#include "source/testes/entidades/TUTeste.cpp"

#include <iostream>
#include "string"

using namespace std;

void invocarTeste(TUDominio *testeDominio, string nome) {
    TUEstado estado = testeDominio->run();
    if(estado.getEstadoCenarioSucesso())
        cout << "[Dominio: " << nome << "] SUCESSO!\n";

    if(!estado.getEstadoCenarioFalha())
        cout << "[Dominio: " << nome << "] FALHA: " << estado.getMensagemCenarioFalha() << "\n\n";
}

int main() {
    cout << "*** TESTES UNITÁRIOS: DOMINIOS ***\n\n";

    TUClasse *testClasse = new TUClasse();
    invocarTeste(testClasse, "Classe");

    TUCodigo *testeCodigo = new TUCodigo();
    invocarTeste(testeCodigo, "Codigo");

    TUData *testeData = new TUData();
    invocarTeste(testeData, "Data");

    TUMatricula *testeMatricula = new TUMatricula();
    invocarTeste(testeMatricula, "Matricula");

    TUResultado *testeResultado = new TUResultado();
    invocarTeste(testeResultado, "Resultado");

    TUSenha *testeSenha = new TUSenha();
    invocarTeste(testeSenha, "Senha");

    TUTelefone *testeTelefone = new TUTelefone();
    invocarTeste(testeTelefone, "Telefone");

    TUTexto *testeTexto = new TUTexto();
    invocarTeste(testeTexto, "Texto");

    cout << "*** TESTES UNITÁRIOS: ENTIDADES ***\n\n";
    TUEstado estado;

    TUCasoTeste *entidadeCasoTeste = new TUCasoTeste();
    estado = entidadeCasoTeste->run();
    if(estado.getEstadoCenarioSucesso()){
        cout << "[Entidade: CasoTeste] SUCESSO!\n";
    }else{
        cout << "[Entidade: CasoTeste] FALHA:" << estado.getMensagemCenarioFalha() <<"\n";
    }

    TUDesenvolvedor *entidadeDesenvolvedor = new TUDesenvolvedor();
    estado = entidadeDesenvolvedor->run();
    if(estado.getEstadoCenarioSucesso()){
        cout << "[Entidade: Desenvolvedor] SUCESSO!\n";
    }else{
        cout << "[Entidade: Desenvolvedor] FALHA:" << estado.getMensagemCenarioFalha() <<"\n";
    }

    TUTeste *entidadeTeste = new TUTeste();
    estado = entidadeTeste->run();
    if(estado.getEstadoCenarioSucesso()){
        cout << "[Entidade: Teste] SUCESSO!\n";
    }else{
        cout << "[Entidade: Teste] FALHA:" << estado.getMensagemCenarioFalha() <<"\n";
    }

    return 0;
}