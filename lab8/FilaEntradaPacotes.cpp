#include "FilaEntradaPacotes.h"
#include <iostream>

void FilaEntradaPacotes::adicionarPacote(const Pacote& pacote) {
    fila.push(pacote);
}

Pacote FilaEntradaPacotes::removerPacote() {
    Pacote pacote = fila.front();
    fila.pop();
    return pacote;
}

bool FilaEntradaPacotes::estaVazia() const {
    return fila.empty();
}

void FilaEntradaPacotes::exibirPacotes() const {
    std::queue<Pacote> temp = fila;
    while (!temp.empty()) {
        Pacote p = temp.front();
        std::cout << "Pacote " << p.getCodigo() << ": " << p.getDescricao() << std::endl;
        temp.pop();
    }
}