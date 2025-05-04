#include "ListaVeiculos.hpp"
#include <algorithm>

void ListaVeiculos::adicionarVeiculo(Veiculo* veiculo) {
    veiculos.push_back(veiculo);
}

void ListaVeiculos::removerVeiculoPorPlaca(const std::string& placa) {
    veiculos.erase(std::remove_if(veiculos.begin(), veiculos.end(),
        [&placa](Veiculo* v) { return v->obterPlaca() == placa; }), veiculos.end());
}

Veiculo* ListaVeiculos::buscarVeiculoPorPlaca(const std::string& placa) {
    for (auto* veiculo : veiculos) {
        if (veiculo->obterPlaca() == placa) {
            return veiculo;
        }
    }
    return nullptr;
}

ListaVeiculos::~ListaVeiculos() {
    for (auto* veiculo : veiculos) {
        delete veiculo;
    }
}
