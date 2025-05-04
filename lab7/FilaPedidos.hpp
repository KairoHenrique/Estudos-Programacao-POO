
#ifndef FILA_PEDIDOS_HPP
#define FILA_PEDIDOS_HPP

#include "Pedido.hpp"
#include "ListaClientes.hpp"
#include "No.hpp"

class FilaPedidos {
private:
    No<Pedido*>* frente;
    No<Pedido*>* traseira;

public:
    FilaPedidos();
    void adicionarPedido(int codigo, string descricao, int tempo, string cpf, ListaClientes& lista);
    Pedido* removerPedido();
    void exibirPedidos(ListaClientes& lista);
    bool vazia();
};

#endif
