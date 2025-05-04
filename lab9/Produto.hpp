#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>

class Produto {
private:
    int id;
    std::string nome;
    double preco;
    int estoque;

public:
    Produto(int id, const std::string& nome, double preco = 10.0, int estoque = 5);

    int getId() const;
    std::string getNome() const;
    double getPreco() const;
    int getEstoque() const;

    void reduzirEstoque(int quantidade);
};

#endif
