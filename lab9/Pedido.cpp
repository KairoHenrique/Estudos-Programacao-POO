#include "Pedido.hpp"

Pedido::Pedido(int id) : id(id) {}

int Pedido::getId() const {
    return id;
}

void Pedido::adicionarProduto(const Produto& produto) {
    itens.push_back(produto);
}

std::vector<Produto> Pedido::getItens() const {
    return itens;
}
