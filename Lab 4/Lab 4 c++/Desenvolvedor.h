
#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    std::string linguagemPrincipal;

public:
    Desenvolvedor(const std::string& nome, int salario, const std::string& linguagemPrincipal);
    std::string getLinguagemPrincipal() const;
    void setLinguagemPrincipal(const std::string& linguagemPrincipal);
    std::string projetosRealizados() const;
    std::string descricaoDesenvolvedor() const;
    std::string descricao() const override;
};

#endif
