#ifndef LISTA_VIAGENS_HPP
#define LISTA_VIAGENS_HPP

#include "Viagem.hpp"
#include <vector>

class ListaViagens {
private:
    std::vector<Viagem> viagens;
public:
    void adicionarViagem(const Viagem& viagem);
    const std::vector<Viagem>& obterViagens() const;
};

#endif
