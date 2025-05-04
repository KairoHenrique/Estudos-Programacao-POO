#ifndef LISTA_CLIENTES_HPP
#define LISTA_CLIENTES_HPP

#include "Pessoa.hpp"
#include "No.hpp"
#include <string>
using namespace std;

class ListaClientes {
private:
    No<Pessoa*>* cabeca;

public:
    ListaClientes();
    void adicionarCliente(string nome, string cpf);
    Pessoa* buscarCliente(string cpf);
    void exibirClientes();
};

#endif
