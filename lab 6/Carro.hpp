#ifndef CARRO_HPP
#define CARRO_HPP

#include "Veiculo.hpp"
#include <string>

class Carro : public Veiculo {
private:
    int numeroDeAssentos;
public:
    Carro();
    Carro(std::string placa, std::string modelo, int numeroDeAssentos);

    int obterNumeroDeAssentos() const;
    void definirNumeroDeAssentos(int numeroDeAssentos);

    std::string obterDetalhes() const override;
    double calcularCusto(double distancia) const override;
};

#endif // CARRO_HPP
