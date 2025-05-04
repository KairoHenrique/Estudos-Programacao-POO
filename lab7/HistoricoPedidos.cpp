
#include "HistoricoPedidos.hpp"
#include <iostream>

using namespace std;

HistoricoPedidos::HistoricoPedidos() {
    cabeca = NULL;
}

void HistoricoPedidos::adicionarAoHistorico(Pedido* pedido) {
    No<Pedido*>* novoNo = new No<Pedido*>(pedido);
    novoNo->prox = cabeca;
    cabeca = novoNo;
}

void HistoricoPedidos::exibirHistorico(ListaClientes& lista) {
    No<Pedido*>* atual = cabeca;
    cout << "\nHistorico de pedidos concluidos:\n";
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
