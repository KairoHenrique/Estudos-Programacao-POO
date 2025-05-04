#ifndef FILAPRIORIDADEPACOTES_H
#define FILAPRIORIDADEPACOTES_H

#include "Pacote.h"
#include <queue>
#include <vector>

class ComparadorPacotes {
public:
    bool operator()(const Pacote& p1, const Pacote& p2) {
        return p1.getPrioridade() > p2.getPrioridade();
    }
};

class FilaPrioridadePacotes {
private:
    std::priority_queue<Pacote, std::vector<Pacote>, ComparadorPacotes> filaPrioridade;

public:
    void adicionarPacote(const Pacote& pacote);
    Pacote removerPacote();
    bool estaVazia() const;
    void exibirPacotes() const;
};

#endif