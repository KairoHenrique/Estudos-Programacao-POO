
#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>
using namespace std;

class Pedido {
public:
    int codigoPedido;
    string descricaoPedido;
    int tempoEstimado;
    string cpfCliente;

    Pedido(int codigo, string descricao, int tempo, string cpf);
};

#endif
