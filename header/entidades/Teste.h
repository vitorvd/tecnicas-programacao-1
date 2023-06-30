#ifndef TRABALHO_TP1_TESTE_H
#define TRABALHO_TP1_TESTE_H

#include "../dominios/Codigo.h"
#include "../dominios/Texto.h"
#include "../dominios/Classe.h"
#include "../entidades/Desenvolvedor.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para cadastro de Teste.
///
/// Atributos são objetos dos domínios Codigo, Texto e Classe.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Teste {

private:
    Codigo codigo;
    Texto nome;
    Classe classe;
    Desenvolvedor desenvolvedor;

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

    /// Atribui um valor para Classe.
    /// @param  valor classe
    void setClasse(const Classe&);

    /// Retorna o valor armazenado em Classe.
    /// @return classe
    Classe getClasse() const;

    Desenvolvedor getDesenvolvedor() const;

    void setDesenvolvedor(const Desenvolvedor&);

};

inline void Teste::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}

inline Codigo Teste::getCodigo() const {
    return codigo;
}

inline void Teste::setNome(const Texto& nome) {
    this->nome = nome;
}

inline Texto Teste::getNome() const {
    return nome;
}

inline void Teste::setClasse(const Classe& classe) {
    this->classe = classe;
}

inline Classe Teste::getClasse() const {
    return classe;
}

inline void Teste::setDesenvolvedor(const Desenvolvedor& desenvolvedor) {
    this->desenvolvedor = desenvolvedor;
}

inline Desenvolvedor Teste::getDesenvolvedor() const {
    return desenvolvedor;
}

#endif //TRABALHO_TP1_TESTE_H
