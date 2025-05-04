#include "ListaProdutos.hpp"

void ListaProdutos::adicionarProduto(const Produto& produto) {
    produtos.push_back(produto);
}

Produto* ListaProdutos::buscarProdutoPorId(int id) {
    for (auto& produto : produtos) {
        if (produto.getId() == id) {
            return &produto;
        }
    }
    return nullptr;
}

std::vector<Produto> ListaProdutos::getProdutos() const {
    return produtos;
}
