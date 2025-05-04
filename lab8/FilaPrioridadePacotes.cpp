#include "FilaPrioridadePacotes.h"
#include <iostream>

void FilaPrioridadePacotes::adicionarPacote(const Pacote& pacote) {
    filaPrioridade.push(pacote);
}

Pacote FilaPrioridadePacotes::removerPacote() {
    Pacote pacote = filaPrioridade.top();
    filaPrioridade.pop();
    return pacote;
}

bool FilaPrioridadePacotes::estaVazia() const {
    return filaPrioridade.empty();
}

void FilaPrioridadePacotes::exibirPacotes() const {
    std::priority_queue<Pacote, std::vector<Pacote>, ComparadorPacotes> temp = filaPrioridade;
    while (!temp.empty()) {
        Pacote p = temp.top();
        std::cout << "Pacote " << p.getCodigo() << ": " << p.getDescricao() << std::endl;
        temp.pop();
    }
}