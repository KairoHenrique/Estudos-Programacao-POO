#include "ListaMotoristas.hpp"
#include <algorithm>

void ListaMotoristas::adicionarMotorista(const Motorista& motorista) {
    motoristas.push_back(motorista);
}

void ListaMotoristas::removerMotoristaPorCPF(const std::string& cpf) {
    motoristas.erase(std::remove_if(motoristas.begin(), motoristas.end(),
        [&cpf](const Motorista& m) { return m.obterCPF() == cpf; }), motoristas.end());
}

Motorista* ListaMotoristas::buscarMotoristaPorCPF(const std::string& cpf) {
    for (auto& motorista : motoristas) {
        if (motorista.obterCPF() == cpf) {
            return &motorista;
        }
    }
    return nullptr;
}
