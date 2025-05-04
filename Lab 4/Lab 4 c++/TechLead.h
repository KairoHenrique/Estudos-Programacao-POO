
#ifndef TECHLEAD_H
#define TECHLEAD_H

#include "Gerente.h"
#include "Desenvolvedor.h"

class TechLead : public Funcionario {
private:
    Gerente gerente;
    Desenvolvedor desenvolvedor;
    int projetosEmAndamento;

public:
    TechLead(const std::string& nome, int salario, int numeroEquipes, const std::string& linguagemPrincipal, int projetosEmAndamento);
    Gerente getGerente() const;
    void setGerente(const Gerente& gerente);
    Desenvolvedor getDesenvolvedor() const;
    void setDesenvolvedor(const Desenvolvedor& desenvolvedor);
    int getProjetosEmAndamento() const;
    void setProjetosEmAndamento(int projetosEmAndamento);
    int bonus() const;
    std::string descricaoGerente() const;
    std::string projetosRealizados() const;
    std::string descricaoDesenvolvedor() const;
    std::string descricao() const override;
};

#endif
