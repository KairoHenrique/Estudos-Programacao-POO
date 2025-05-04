#include <iostream>
#include "ListaProdutos.hpp"
#include "FilaPedidos.hpp"
#include "HistoricoPedidos.hpp"

int main() {
    ListaProdutos listaProdutos;
    FilaPedidos filaPedidos;
    HistoricoPedidos historicoPedidos;

    int opcao;
    do {
        std::cout << "=== {Menu} ===\n";
        std::cout << "1 - Cadastrar produto\n";
        std::cout << "2 - Registrar pedido\n";
        std::cout << "3 - Processar pedido\n";
        std::cout << "4 - Exibir produtos\n";
        std::cout << "5 - Exibir pedidos\n";
        std::cout << "6 - Exibir historico\n";
        std::cout << "7 - Sair\n";
        std::cout << "Opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                int id;
                std::string nome;
                double preco;
                int estoque;
                std::cout << "ID: "; std::cin >> id;
                std::cout << "Nome: "; std::cin >> nome;
                std::cout << "Preco: "; std::cin >> preco;
                std::cout << "Estoque: "; std::cin >> estoque;
                listaProdutos.adicionarProduto(Produto(id, nome, preco, estoque));
                break;
            }
            case 2: {
                int idPedido;
                std::cout << "ID do pedido: "; std::cin >> idPedido;
                Pedido pedido(idPedido);
                int idProduto;
                std::cout << "ID do produto (-1 quando desejar finalizar de inserir o produto): ";
                while (std::cin >> idProduto && idProduto != -1) {
                    Produto* produto = listaProdutos.buscarProdutoPorId(idProduto);
                    if (produto) {
                        pedido.adicionarProduto(*produto);
                        produto->reduzirEstoque(1);
                    } else {
                        std::cout << "Produto nao encontrado\n";
                    }
                }
                filaPedidos.adicionarPedido(pedido);
                break;
            }
            case 3: {
                if (!filaPedidos.vazia()) {
                    Pedido pedido = filaPedidos.proximoPedido();
                    historicoPedidos.adicionarAoHistorico(pedido);
                    std::cout << "Pedido processado\n";
                } else {
                    std::cout << "Nao ha pedidos\n";
                }
                break;
            }
            case 4: {
                for (const auto& produto : listaProdutos.getProdutos()) {
                    std::cout << "ID: " << produto.getId() << ", Nome: " << produto.getNome()
                              << ", Preco: " << produto.getPreco() << ", Estoque: " << produto.getEstoque() << '\n';
                }
                break;
            }
            case 5: {
                if (filaPedidos.vazia()) {
                    std::cout << "Nenhum pedido pendente\n";
                } else {
                    std::cout << "Pedidos pendentes:\n";
                    FilaPedidos copiaFila = filaPedidos; 
                    while (!copiaFila.vazia()) {
                        Pedido pedido = copiaFila.proximoPedido();
                        std::cout << "Pedido ID: " << pedido.getId() << '\n';
                    }
                }
                break;
            }
            case 6: {
                for (const auto& pedido : historicoPedidos.getHistorico()) {
                    std::cout << "Pedido ID: " << pedido.getId() << '\n';
                }
                break;
            }
        }
    } while (opcao != 7);

    return 0;
}
