#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Livro.h"

class Biblioteca {
private:
    std::vector<Livro> livros;

public:
    bool adicionarLivro(const Livro &livro);
    Livro* buscarLivro(const std::string &titulo);
    void mostrarLivros() const;
};

#endif
