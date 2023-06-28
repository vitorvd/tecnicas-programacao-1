#include "test_dominio.h"

void TestDominio::testGettersAndSetters() {
    Usuario usuario;
    usuario.setNome("João");
    usuario.setIdade(25);
    usuario.setEmail("joao@example.com");
    usuario.setMatricula("12345");
    usuario.setSenha("senha123");
    usuario.setTelefone("987654321");

    std::cout << "Nome: " << usuario.getNome() << std::endl;
    std::cout << "Idade: " << usuario.getIdade() << std::endl;
    std::cout << "Email: " << usuario.getEmail() << std::endl;
    std::cout << "Matrícula: " << usuario.getMatricula() << std::endl;
    std::cout << "Senha: " << usuario.getSenha() << std::endl;
    std::cout << "Telefone: " << usuario.getTelefone() << std::endl;
}

int main() {
    TestDominio test;
    test.testGettersAndSetters();

    return 0;
}
