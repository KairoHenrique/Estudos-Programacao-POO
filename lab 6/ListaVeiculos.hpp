#ifndef LISTA_VEICULOS_HPP
#define LISTA_VEICULOS_HPP

#include "Veiculo.hpp"
#include <vector>

class ListaVeiculos {
private:
    std::vector<Veiculo*> veiculos;
public:
    void adicionarVeiculo(Veiculo* veiculo);
    void removerVeiculoPorPlaca(const std::string& placa);
    Veiculo* buscarVeiculoPorPlaca(const std::string& placa);
    ~ListaVeiculos();
};

#endif
