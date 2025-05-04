#ifndef VIAGEM_HPP
#define VIAGEM_HPP

#include "Veiculo.hpp"
#include "Motorista.hpp"
#include <string>

class Viagem {
private:
    Motorista motorista;
    Veiculo* veiculo;
    double distancia;
public:
    Viagem(Motorista motorista, Veiculo* veiculo, double distancia);

    double calcularCusto() const;
    std::string obterDetalhes() const;
};

#endif
