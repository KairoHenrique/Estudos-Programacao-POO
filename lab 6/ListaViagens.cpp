#include "ListaViagens.hpp"

void ListaViagens::adicionarViagem(const Viagem& viagem) {
    viagens.push_back(viagem);
}

const std::vector<Viagem>& ListaViagens::obterViagens() const {
    return viagens;
}
