#include <iostream>
#include "Autor.h"
#include "Livro.h"
#include "Biblioteca.h"

int main() {
    Biblioteca biblioteca;
    int opcao;

    while (true) {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Adicionar livro" << std::endl;
        std::cout << "2. Buscar livro" << std::endl;
        std::cout << "3. Mostrar todos os livros" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;
        std::cin.ignore();

        if (opcao == 1) {
            std::string titulo, nomeAutor, isbn;
            std::cout << "Digite o titulo do livro: ";
            std::getline(std::cin, titulo);
            std::cout << "Digite o nome do autor: ";
            std::getline(std::cin, nomeAutor);
            std::cout << "Digite o ISBN do livro: ";
            std::getline(std::cin, isbn);

            Autor autor(nomeAutor);
            Livro livro(titulo, autor, isbn);
            biblioteca.adicionarLivro(livro);
            std::cout << "Livro adicionado com sucesso!" << std::endl;

        } else if (opcao == 2) {
            std::string tituloBusca;
            std::cout << "Digite o titulo do livro que deseja buscar: ";
            std::getline(std::cin, tituloBusca);

            Livro* livroEncontrado = biblioteca.buscarLivro(tituloBusca);
            if (livroEncontrado != nullptr) {
                std::cout << "Livro encontrado: " << livroEncontrado->toString() << std::endl;
            } else {
                std::cout << "Livro nao encontrado." << std::endl;
            }

        } else if (opcao == 3) {
            biblioteca.mostrarLivros();

        } else if (opcao == 4) {
            std::cout << "Programa encerrado" << std::endl;
            break;

        } else {
            std::cout << "Opcao invalida." << std::endl;
        }
    }

    return 0;
}
