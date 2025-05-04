#include "ListaClientes.hpp"
#include <iostream>
using namespace std;

ListaClientes::ListaClientes() {
    cabeca = nullptr;
}

void ListaClientes::adicionarCliente(string nome, string cpf) {
    if (!buscarCliente(cpf)) { 
        Pessoa* novoCliente = new Pessoa(nome, cpf); // update the nome and cpf fields here
        No<Pessoa*>* novoNo = new No<Pessoa*>(novoCliente);
        novoNo->prox = cabeca;
        cabeca = novoNo;      
        cout << "Cliente cadastrado com sucesso!\n";
    } else {
        cout << "Erro: Cliente com este CPF ja esta cadastrado.\n";
    }
}

Pessoa* ListaClientes::buscarCliente(string cpf) {
    No<Pessoa*>* atual = cabeca;
    while (atual) {              
        if (atual->dado->cpf == cpf) {
            return atual->dado;
        }
        atual = atual->prox;
    }
    return nullptr;
}

void ListaClientes::exibirClientes() {
    if (cabeca == nullptr) {
        cout << "Nenhum cliente cadastrado.\n";
        return;
    }

    No<Pessoa*>* atual = cabeca;
    cout << "Clientes cadastrados:\n";
    while (atual) {
        cout << "Nome: " << atual->dado->nome << ", CPF: " << atual->dado->cpf << "\n";
        atual = atual->prox;
    }
}
