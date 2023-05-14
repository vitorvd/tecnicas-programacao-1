#ifndef TRABALHO_TP1_DESENVOLVEDOR_H
#define TRABALHO_TP1_DESENVOLVEDOR_H

#include "../dominios/Matricula.h"
#include "../dominios/Texto.h"
#include "../dominios/Senha.h"
#include "../dominios/Telefone.h"

using namespace std;

// -----------------------------------------------------------------------------------------
/// Padrão para cadastro de Desenvolvedor.
///
/// Atributos são objetos dos domínios Matricula, Texto, Senha e Telefone.
// -----------------------------------------------------------------------------------------

// 211060737 e 200019473

class Desenvolvedor {

private:
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

public:

    /// Atribui um valor para Matricula.
    /// @param  valor matricula
    void setMatricula(const Matricula&);

    /// Retorna o valor armazenado em Matricula.
    /// @return matricula
    Matricula getMatricula() const;

    /// Atribui um valor para Nome.
    /// @param  valor texto
    void setNome(const Texto&);

    /// Retorna o valor armazenado em Nome.
    /// @return nome
    Texto getNome() const;

    /// Atribui um valor para Senha.
    /// @param  valor senha
    void setSenha(const Senha&);

    /// Retorna o valor armazenado em Senha.
    /// @return senha
    Senha getSenha() const;

    /// Atribui um valor para Telefone.
    /// @param  valor telefone
    void setTelefone(const Telefone&);

    /// Retorna o valor armazenado em Telefone.
    /// @return telefone
    Telefone getTelefone() const;

};

inline void Desenvolvedor::setMatricula(const Matricula& matricula) {
    this->matricula = matricula;
}

inline Matricula Desenvolvedor::getMatricula() const {
    return matricula;
}

inline void Desenvolvedor::setNome(const Texto& nome) {
    this->nome = nome;
}

inline Texto Desenvolvedor::getNome() const {
    return nome;
}

inline void Desenvolvedor::setSenha(const Senha& senha) {
    this->senha = senha;
}

inline Senha Desenvolvedor::getSenha() const {
    return senha;
}

inline void Desenvolvedor::setTelefone(const Telefone& telefone) {
    this->telefone = telefone;
}

inline Telefone Desenvolvedor::getTelefone() const {
    return telefone;
}

#endif //TRABALHO_TP1_DESENVOLVEDOR_H
