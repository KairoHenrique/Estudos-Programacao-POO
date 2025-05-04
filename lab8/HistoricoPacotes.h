#ifndef HISTORICOPACOTES_H
#define HISTORICOPACOTES_H

#include "Pacote.h"
#include <vector>

class HistoricoPacotes {
private:
    std::vector<Pacote> historico;

public:
    void adicionarPacote(const Pacote& pacote);
    void exibirHistorico() const;
};

#endif
