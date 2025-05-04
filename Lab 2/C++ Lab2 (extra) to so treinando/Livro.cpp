#include "Livro.h"

Livro::Livro(const std::string &titulo, const Autor &autor, const std::string &isbn)
    : titulo(titulo), autor(autor), isbn(isbn) {}

std::string Livro::getTitulo() const {
    return titulo;
}

Autor Livro::getAutor() const {
    return autor;
}

std::string Livro::getIsbn() const {
    return isbn;
}

std::string Livro::toString() const {
    return "Titulo: " + titulo + ", Autor: " + autor.getNome() + ", ISBN: " + isbn;
}
