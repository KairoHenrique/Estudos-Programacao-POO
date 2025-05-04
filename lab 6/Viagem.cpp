#include "Viagem.hpp"

Viagem::Viagem(Motorista motorista, Veiculo* veiculo, double distancia)
    : motorista(motorista), veiculo(veiculo), distancia(distancia) {}

double Viagem::calcularCusto() const {
    return veiculo->calcularCusto(distancia);
}

std::string Viagem::obterDetalhes() const {
    return "Motorista: " + motorista.obterDetalhes() + 
           ", Veículo: " + veiculo->obterDetalhes() +
           ", Distância: " + std::to_string(distancia) + " km, Custo: R$ " +
           std::to_string(calcularCusto());
}
