#ifndef FILAENTRADAPACOTES_H
#define FILAENTRADAPACOTES_H

#include "Pacote.h"
#include <queue>

class FilaEntradaPacotes {
private:
    std::queue<Pacote> fila;

public:
    void adicionarPacote(const Pacote& pacote);
    Pacote removerPacote();
    bool estaVazia() const;
    void exibirPacotes() const;
};

#endif