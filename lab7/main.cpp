
#include <iostream>
#include "ListaClientes.hpp"
#include "FilaPedidos.hpp"
#include "HistoricoPedidos.hpp"
#include "Pedido.hpp"
#include "No.hpp"

using namespace std;

int main() {
    ListaClientes listaClientes;
    FilaPedidos filaPedidos;
    HistoricoPedidos historicoPedidos;

    int opcao;
    do {
        cout << "\n--- Gerenciamento de Pedidos ---\n";
        cout << "1. Adicionar cliente\n";
        cout << "2. Adicionar pedido\n";
        cout << "3. Preparar proximo pedido\n";
        cout << "4. Exibir pedidos em espera\n";
        cout << "5. Exibir historico de pedidos\n";
        cout << "6. Exibir clientes cadastrados\n";
        cout << "7. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                string nome, cpf;
                cin.ignore(); 
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);
                cout << "Digite o CPF do cliente: ";
                cin >> cpf; 
                listaClientes.adicionarCliente(nome, cpf);
                break;
}

            case 2: {
                int codigo, tempo;
                string descricao, cpf;
                cout << "Digite o codigo do pedido: ";
                cin >> codigo;
                cout << "Digite a descricao do pedido: ";
                cin >> descricao;
                cout << "Digite o tempo estimado de preparo: ";
                cin >> tempo;
                cout << "Digite o CPF do cliente: ";
                cin >> cpf;
                filaPedidos.adicionarPedido(codigo, descricao, tempo, cpf, listaClientes);
                break;
            }
            case 3: {
                Pedido* pedido = filaPedidos.removerPedido();
                if (pedido) {
                    historicoPedidos.adicionarAoHistorico(pedido);
                    cout << "Pedido preparado com sucesso.\n";
                }
                break;
            }
            case 4:
                filaPedidos.exibirPedidos(listaClientes);
                break;
            case 5:
                historicoPedidos.exibirHistorico(listaClientes);
                break;
            case 6:
                listaClientes.exibirClientes();
                break;
            case 7:
                cout << "Programa Encerreado\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 7);

    return 0;
}
