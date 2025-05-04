#include "ListaClientes.h"
#include <iostream>

void ListaClientes::adicionarCliente(const Cliente& cliente) {
    clientes.push_back(cliente);
}

Cliente* ListaClientes::buscarCliente(const std::string& cpf) {
    for (auto& cliente : clientes) {
        if (cliente.getCpf() == cpf) {
            return &cliente;
        }
    }
    return nullptr;
}

void ListaClientes::exibirClientes() const {
    for (const auto& cliente : clientes) {
        std::cout << "Nome: " << cliente.getNome() << ", CPF: " << cliente.getCpf() << std::endl;
    }
}