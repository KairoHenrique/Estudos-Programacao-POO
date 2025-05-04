#include "HistoricoPacotes.h"
#include <iostream>

void HistoricoPacotes::adicionarPacote(const Pacote& pacote) {
    historico.push_back(pacote);
}

void HistoricoPacotes::exibirHistorico() const {
    if (historico.empty()) {
        std::cout << "Nenhum pacote entregue ainda.\n";
        return;
    }
    for (const auto& pacote : historico) {
        std::cout << "Pacote " << pacote.getCodigo() 
                  << " - Descrição: " << pacote.getDescricao() 
                  << " - Cliente CPF: " << pacote.getCpfCliente() 
                  << std::endl;
    }
}
