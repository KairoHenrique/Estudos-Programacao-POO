#include "Biblioteca.h"
#include <iostream>

bool Biblioteca::adicionarLivro(const Livro &livro) {
    livros.push_back(livro);
    return true;
}

Livro* Biblioteca::buscarLivro(const std::string &titulo) {
    for (auto &livro : livros) {
        if (livro.getTitulo() == titulo) {
            return &livro;
        }
    }
    return nullptr;
}

void Biblioteca::mostrarLivros() const {
    if (livros.empty()) {
        std::cout << "A biblioteca esta vazia." << std::endl;
    } else {
        std::cout << "Livros na biblioteca:" << std::endl;
        for (const auto &livro : livros) {
            std::cout << livro.toString() << std::endl;
        }
    }
}
