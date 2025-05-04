#include "FilaPedidos.hpp"
#include <stdexcept>
void FilaPedidos::adicionarPedido(const Pedido& pedido) {
    fila.push(pedido);
}

Pedido FilaPedidos::proximoPedido() {
    if (!fila.empty()) {
        Pedido pedido = fila.front();
        fila.pop();
        return pedido;
    }
    throw std::runtime_error("Fila vazia");
}

bool FilaPedidos::vazia() const {
    return fila.empty();
}
