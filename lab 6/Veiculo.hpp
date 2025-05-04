#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <string>

class Veiculo {
protected:
    std::string placa;
    std::string modelo;
public:
    Veiculo();
    Veiculo(std::string placa, std::string modelo);

    std::string obterPlaca() const;
    std::string obterModelo() const;

    void definirPlaca(std::string placa);
    void definirModelo(std::string modelo);

    virtual std::string obterDetalhes() const;
    virtual double calcularCusto(double distancia) const = 0;

    virtual ~Veiculo() = default;
};

#endif
