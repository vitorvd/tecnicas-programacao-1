#ifndef TRABALHO_TP1_CASOTESTE_H
#define TRABALHO_TP1_CASOTESTE_H

#include "../dominios/Codigo.h"
#include "../dominios/Texto.h"
#include "../dominios/Data.h"
#include "../dominios/Resultado.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para cadastro de Caso de Teste.
///
/// Atributos são objetos dos domínios Codigo, Texto, Data e Resultado.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class CasoTeste {

private:
    Codigo codigo;
    Texto nome;
    Data data;
    Texto acao;
    Texto resposta;
    Resultado resultado;

public:

    /// Atribui um valor para Codigo.
    /// @param  valor codigo
    void setCodigo(const Codigo&);

    /// Retorna o valor armazenado em Codigo.
    /// @return codigo
    Codigo getCodigo() const;
    
    /// Atribui um valor para Nome.
    /// @param  valor texto
    void setNome(const Texto&);

    /// Retorna o valor armazenado em Nome.
    /// @return nome
    Texto getNome() const;

    /// Atribui um valor para Data.
    /// @param  valor data
    void setData(const Data&);

    /// Retorna o valor armazenado em Data.
    /// @return data
    Data getData() const;

    /// Atribui um valor para Acao
    /// @param  valor texto
    void setAcao(const Texto&);

    /// Retorna o valor armazenado em Acao.
    /// @return acao
    Texto getAcao() const;

    /// Atribui um valor para Resposta.
    /// @param  valor texto
    void setResposta(const Texto&);

    /// Retorna o valor armazenado em Resposta.
    /// @return resposta
    Texto getResposta() const;

    /// Atribui um valor para Resultado.
    /// @param  valor resultado
    void setResultado(const Resultado&);

    /// Retorna o valor armazenado em Resultado.
    /// @return resultado
    Resultado getResultado() const;

};
inline void CasoTeste::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}

inline Codigo CasoTeste::getCodigo() const {
    return codigo;
}

inline void CasoTeste::setNome(const Texto& nome) {
    this->nome = nome;
}

inline Texto CasoTeste::getNome() const {
    return nome;
}

inline void CasoTeste::setData(const Data& data) {
    this->data = data;
}

inline Data CasoTeste::getData() const {
    return data;
}

inline void CasoTeste::setAcao(const Texto& acao) {
    this->acao = acao;
}

inline Texto CasoTeste::getAcao() const {
    return acao;
}

inline void CasoTeste::setResposta(const Texto& resposta) {
    this->resposta = resposta;
}

inline Texto CasoTeste::getResposta() const {
    return resposta;
}

inline void CasoTeste::setResultado(const Resultado& resultado) {
    this->resultado = resultado;
}

inline Resultado CasoTeste::getResultado() const {
    return resultado;
}

#endif //TRABALHO_TP1_CASOTESTE_H
