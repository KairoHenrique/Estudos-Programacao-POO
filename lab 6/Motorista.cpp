#include "Motorista.hpp"

Motorista::Motorista() {}

Motorista::Motorista(std::string nome, std::string cpf, std::string categoriaHabilitacao) 
    : nome(nome), cpf(cpf), categoriaHabilitacao(categoriaHabilitacao) {}

std::string Motorista::obterNome() const {
    return nome;
}

std::string Motorista::obterCPF() const {
    return cpf;
}

std::string Motorista::obterCategoriaHabilitacao() const {
    return categoriaHabilitacao;
}

void Motorista::definirNome(std::string nome) {
    this->nome = nome;
}

void Motorista::definirCPF(std::string cpf) {
    this->cpf = cpf;
}

void Motorista::definirCategoriaHabilitacao(std::string categoriaHabilitacao) {
    this->categoriaHabilitacao = categoriaHabilitacao;
}

std::string Motorista::obterDetalhes() const {
    return "Nome: " + nome + ", CPF: " + cpf + ", Habilitação: " + categoriaHabilitacao;
}
