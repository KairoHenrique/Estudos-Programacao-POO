
#include "TechLead.h"

TechLead::TechLead(const std::string& nome, int salario, int numeroEquipes, const std::string& linguagemPrincipal, int projetosEmAndamento)
    : Funcionario(nome, salario), gerente(nome, salario, numeroEquipes), desenvolvedor(nome, salario, linguagemPrincipal), projetosEmAndamento(projetosEmAndamento) {}

Gerente TechLead::getGerente() const {
    return gerente;
}

void TechLead::setGerente(const Gerente& gerente) {
    this->gerente = gerente;
}

Desenvolvedor TechLead::getDesenvolvedor() const {
    return desenvolvedor;
}

void TechLead::setDesenvolvedor(const Desenvolvedor& desenvolvedor) {
    this->desenvolvedor = desenvolvedor;
}

int TechLead::getProjetosEmAndamento() const {
    return projetosEmAndamento;
}

void TechLead::setProjetosEmAndamento(int projetosEmAndamento) {
    this->projetosEmAndamento = projetosEmAndamento;
}

int TechLead::bonus() const {
    return gerente.bonus();
}

std::string TechLead::descricaoGerente() const {
    return gerente.descricaoGerente();
}

std::string TechLead::projetosRealizados() const {
    return desenvolvedor.projetosRealizados();
}

std::string TechLead::descricaoDesenvolvedor() const {
    return desenvolvedor.descricaoDesenvolvedor();
}

std::string TechLead::descricao() const {
    return Funcionario::descricao() + gerente.descricaoGerente() + descricaoDesenvolvedor() +
           "\nProjetos em andamento: " + std::to_string(projetosEmAndamento);
}
