#ifndef MOTO_HPP
#define MOTO_HPP

#include "Veiculo.hpp"
#include <string>

class Moto : public Veiculo {
private:
    int cilindradas;
public:
    Moto();
    Moto(std::string placa, std::string modelo, int cilindradas);

    int obterCilindradas() const;
    void definirCilindradas(int cilindradas);

    std::string obterDetalhes() const override;
    double calcularCusto(double distancia) const override;
};

#endif // MOTO_HPP
