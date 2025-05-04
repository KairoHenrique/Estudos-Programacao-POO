#include "Carro.hpp"

Carro::Carro() : numeroDeAssentos(0) {}

Carro::Carro(std::string placa, std::string modelo, int numeroDeAssentos) 
    : Veiculo(placa, modelo), numeroDeAssentos(numeroDeAssentos) {}

int Carro::obterNumeroDeAssentos() const {
    return numeroDeAssentos;
}

void Carro::definirNumeroDeAssentos(int numeroDeAssentos) {
    this->numeroDeAssentos = numeroDeAssentos;
}

std::string Carro::obterDetalhes() const {
    return Veiculo::obterDetalhes() + ", Assentos: " + std::to_string(numeroDeAssentos);
}

double Carro::calcularCusto(double distancia) const {
    return distancia * 0.5;
}
