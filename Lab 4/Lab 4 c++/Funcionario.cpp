
#include "Funcionario.h"

Funcionario::Funcionario(const std::string& nome, int salario) : nome(nome), salario(salario) {}

std::string Funcionario::getNome() const {
    return nome;
}

void Funcionario::setNome(const std::string& nome) {
    this->nome = nome;
}

int Funcionario::getSalario() const {
    return salario;
}

void Funcionario::setSalario(int salario) {
    this->salario = salario;
}

std::string Funcionario::descricao() const {
    return "Nome: " + nome + "\nSalario: " + std::to_string(salario);
}
