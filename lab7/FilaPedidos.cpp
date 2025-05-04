
#include "FilaPedidos.hpp"
#include <iostream>

using namespace std;

FilaPedidos::FilaPedidos() {
    frente = NULL;
    traseira = NULL;
}

void FilaPedidos::adicionarPedido(int codigo, string descricao, int tempo, string cpf, ListaClientes& lista) {
    if (lista.buscarCliente(cpf)) {
        Pedido* novoPedido = new Pedido(codigo, descricao, tempo, cpf);
        No<Pedido*>* novoNo = new No<Pedido*>(novoPedido);
        if (frente == NULL) {
            frente = novoNo;
            traseira = novoNo;
        } else {
            traseira->prox = novoNo;
            traseira = novoNo;
        }
    } else {
        cout << "Erro: CPF nao encontrado nos clientes cadastrados.\n";
    }
}

Pedido* FilaPedidos::removerPedido() {
    if (frente == NULL) {
        cout << "Fila de pedidos esta vazia.\n";
        return NULL;
    }
    No<Pedido*>* temp = frente;
    frente = frente->prox;
    Pedido* pedidoRemovido = temp->dado;
    delete temp;
    return pedidoRemovido;
}

void FilaPedidos::exibirPedidos(ListaClientes& lista) {
    No<Pedido*>* atual = frente;
    cout << "\nPedidos em espera:\n";
    while (atual) {
        Pessoa* cliente = lista.buscarCliente(atual->dado->cpfCliente);
        if (cliente) {
            cout << "Codigo: " << atual->dado->codigoPedido
                 << ", Descricao: " << atual->dado->descricaoPedido
                 << ", Cliente: " << cliente->nome
                 << " (CPF: " << cliente->cpf << ")\n";
        }
        atual = atual->prox;
    }
}

bool FilaPedidos::vazia() {
    return frente == NULL;
}
