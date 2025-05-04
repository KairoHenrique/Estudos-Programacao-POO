#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H

#include "Cliente.h"
#include <vector>

class ListaClientes {
private:
    std::vector<Cliente> clientes;

public:
    void adicionarCliente(const Cliente& cliente);
    Cliente* buscarCliente(const std::string& cpf);
    void exibirClientes() const;
};

#endif