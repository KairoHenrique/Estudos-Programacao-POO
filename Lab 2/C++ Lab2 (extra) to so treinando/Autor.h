#ifndef AUTOR_H
#define AUTOR_H

#include <string>

class Autor {
private:
    std::string nome;

public:
    Autor(const std::string &nome);
    std::string getNome() const;
    void setNome(const std::string &nome);
};

#endif
