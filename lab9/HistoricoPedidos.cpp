#include "HistoricoPedidos.hpp"

void HistoricoPedidos::adicionarAoHistorico(const Pedido& pedido) {
    historico.push_back(pedido);
}

std::vector<Pedido> HistoricoPedidos::getHistorico() const {
    return historico;
}
