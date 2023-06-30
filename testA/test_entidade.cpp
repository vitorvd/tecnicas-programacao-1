#include <iostream>
#include "entidade.h"

void testarEntidade() {
    CadastroUsuarios cadastro;

    // Cadastrar conta do desenvolvedor
    Usuario desenvolvedor1;
    desenvolvedor1.setNome("João");
    desenvolvedor1.setMatricula("12345");
    desenvolvedor1.setTelefone("987654321");

    Usuario desenvolvedor2;
    desenvolvedor2.setNome("Maria");
    desenvolvedor2.setMatricula("54321");
    desenvolvedor2.setTelefone("123456789");

    // Adicionar usuários ao cadastro
    cadastro.adicionarUsuario(desenvolvedor1);
    cadastro.adicionarUsuario(desenvolvedor2);

    // Mostrar lista de usuários
    std::cout << "Lista de usuários:" << std::endl;
    cadastro.mostrarUsuarios();

    // Remover um usuário
    std::cout << "Removendo usuário João..." << std::endl;
    cadastro.removerUsuario(desenvolvedor1);

    // Mostrar lista de usuários atualizada
    std::cout << "Lista de usuários atualizada:" << std::endl;
    cadastro.mostrarUsuarios();
}
