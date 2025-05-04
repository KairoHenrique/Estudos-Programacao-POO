#include "Caminhao.hpp"

Caminhao::Caminhao() : capacidadeCarga(0.0) {}

Caminhao::Caminhao(std::string placa, std::string modelo, double capacidadeCarga) 
    : Veiculo(placa, modelo), capacidadeCarga(capacidadeCarga) {}

double Caminhao::obterCapacidadeCarga() const {
    return capacidadeCarga;
}

void Caminhao::definirCapacidadeCarga(double capacidadeCarga) {
    this->capacidadeCarga = capacidadeCarga;
}

std::string Caminhao::obterDetalhes() const {
    return Veiculo::obterDetalhes() + ", Capacidade de carga: " + std::to_string(capacidadeCarga) + " Kg";
}

double Caminhao::calcularCusto(double distancia) const {
    return distancia * 1.0;
}
