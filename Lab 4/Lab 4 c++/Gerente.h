
#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    int numeroEquipes;

public:
    Gerente(const std::string& nome, int salario, int numeroEquipes);
    int getNumeroEquipes() const;
    void setNumeroEquipes(int numeroEquipes);
    int bonus() const;
    std::string descricaoGerente() const;
    std::string descricao() const override;
};

#endif
