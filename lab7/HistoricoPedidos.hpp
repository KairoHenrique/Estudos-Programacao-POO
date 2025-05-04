
#ifndef HISTORICO_PEDIDOS_HPP
#define HISTORICO_PEDIDOS_HPP

#include "Pedido.hpp"
#include "ListaClientes.hpp"
#include "No.hpp"

class HistoricoPedidos {
private:
    No<Pedido*>* cabeca;

public:
    HistoricoPedidos();
    void adicionarAoHistorico(Pedido* pedido);
    void exibirHistorico(ListaClientes& lista);
};

#endif
