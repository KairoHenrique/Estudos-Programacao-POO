#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include "Autor.h"

class Livro {
private:
    std::string titulo;
    Autor autor;
    std::string isbn;

public:
    Livro(const std::string &titulo, const Autor &autor, const std::string &isbn);
    std::string getTitulo() const;
    Autor getAutor() const;
    std::string getIsbn() const;
    std::string toString() const;
};

#endif
