#ifndef HISTORICOPEDIDOS_HPP
#define HISTORICOPEDIDOS_HPP

#include <vector>
#include "Pedido.hpp"

class HistoricoPedidos {
private:
    std::vector<Pedido> historico;

public:
    void adicionarAoHistorico(const Pedido& pedido);
    std::vector<Pedido> getHistorico() const;
};

#endif
