#ifndef LISTAPRODUTOS_HPP
#define LISTAPRODUTOS_HPP

#include <vector>
#include "Produto.hpp"

class ListaProdutos {
private:
    std::vector<Produto> produtos;

public:
    void adicionarProduto(const Produto& produto);
    Produto* buscarProdutoPorId(int id);
    std::vector<Produto> getProdutos() const;
};

#endif
