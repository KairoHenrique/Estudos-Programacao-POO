
#include "Gerente.h"

Gerente::Gerente(const std::string& nome, int salario, int numeroEquipes)
    : Funcionario(nome, salario), numeroEquipes(numeroEquipes) {}

int Gerente::getNumeroEquipes() const {
    return numeroEquipes;
}

void Gerente::setNumeroEquipes(int numeroEquipes) {
    this->numeroEquipes = numeroEquipes;
}

int Gerente::bonus() const {
    return numeroEquipes * 500;
}

std::string Gerente::descricaoGerente() const {
    return "\nNumero de equipes: " + std::to_string(numeroEquipes);
}

std::string Gerente::descricao() const {
    return Funcionario::descricao() + descricaoGerente();
}
