#include "Produto.hpp"

Produto::Produto(int id, const std::string& nome, double preco, int estoque)
    : id(id), nome(nome), preco(preco), estoque(estoque) {}

int Produto::getId() const {
    return id;
}

std::string Produto::getNome() const {
    return nome;
}

double Produto::getPreco() const {
    return preco;
}

int Produto::getEstoque() const {
    return estoque;
}

void Produto::reduzirEstoque(int quantidade) {
    if (quantidade <= estoque) {
        estoque -= quantidade;
    }
}
