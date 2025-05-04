#include "Autor.h"

Autor::Autor(const std::string &nome) : nome(nome) {}

std::string Autor::getNome() const {
    return nome;
}

void Autor::setNome(const std::string &nome) {
    this->nome = nome;
}
