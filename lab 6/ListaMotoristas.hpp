#ifndef LISTA_MOTORISTAS_HPP
#define LISTA_MOTORISTAS_HPP

#include "Motorista.hpp"
#include <vector>

class ListaMotoristas {
private:
    std::vector<Motorista> motoristas;
public:
    void adicionarMotorista(const Motorista& motorista);
    void removerMotoristaPorCPF(const std::string& cpf);
    Motorista* buscarMotoristaPorCPF(const std::string& cpf);
};

#endif
