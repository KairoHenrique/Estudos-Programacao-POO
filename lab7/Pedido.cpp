
#include "Pedido.hpp"

Pedido::Pedido(int codigo, string descricao, int tempo, string cpf) {
    codigoPedido = codigo;
    descricaoPedido = descricao;
    tempoEstimado = tempo;
    cpfCliente = cpf;
}
