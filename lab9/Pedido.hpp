#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <vector>
#include "Produto.hpp"

class Pedido {
private:
    int id;
    std::vector<Produto> itens;

public:
    Pedido(int id);

    int getId() const;
    void adicionarProduto(const Produto& produto);
    std::vector<Produto> getItens() const;
};

#endif
