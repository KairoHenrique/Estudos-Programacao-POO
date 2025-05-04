#ifndef CAMINHAO_HPP
#define CAMINHAO_HPP

#include "Veiculo.hpp"
#include <string>

class Caminhao : public Veiculo {
private:
    double capacidadeCarga;
public:
    Caminhao();
    Caminhao(std::string placa, std::string modelo, double capacidadeCarga);

    double obterCapacidadeCarga() const;
    void definirCapacidadeCarga(double capacidadeCarga);

    std::string obterDetalhes() const override;
    double calcularCusto(double distancia) const override;
};

#endif // CAMINHAO_HPP
