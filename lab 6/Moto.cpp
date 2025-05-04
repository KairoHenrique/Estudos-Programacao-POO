#include "Moto.hpp"

Moto::Moto() : cilindradas(0) {}

Moto::Moto(std::string placa, std::string modelo, int cilindradas) 
    : Veiculo(placa, modelo), cilindradas(cilindradas) {}

int Moto::obterCilindradas() const {
    return cilindradas;
}

void Moto::definirCilindradas(int cilindradas) {
    this->cilindradas = cilindradas;
}

std::string Moto::obterDetalhes() const {
    return Veiculo::obterDetalhes() + ", Cilindradas: " + std::to_string(cilindradas);
}

double Moto::calcularCusto(double distancia) const {
    return distancia * 0.2;
}
