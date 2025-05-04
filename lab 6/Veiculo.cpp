#include "Veiculo.hpp"

Veiculo::Veiculo() : placa(""), modelo("") {}

Veiculo::Veiculo(std::string placa, std::string modelo)
    : placa(placa), modelo(modelo) {}

std::string Veiculo::obterPlaca() const {
    return placa;
}

std::string Veiculo::obterModelo() const {
    return modelo;
}

void Veiculo::definirPlaca(std::string placa) {
    this->placa = placa;
}

void Veiculo::definirModelo(std::string modelo) {
    this->modelo = modelo;
}

std::string Veiculo::obterDetalhes() const {
    return "Placa: " + placa + ", Modelo: " + modelo;
}
