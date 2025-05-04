#ifndef FILAPEDIDOS_HPP
#define FILAPEDIDOS_HPP

#include <queue>
#include "Pedido.hpp"

class FilaPedidos {
private:
    std::queue<Pedido> fila;

public:
    void adicionarPedido(const Pedido& pedido);
    Pedido proximoPedido();
    bool vazia() const;
};

#endif
