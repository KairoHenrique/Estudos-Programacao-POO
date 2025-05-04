#include "Pacote.h"

Pacote::Pacote(int codigo, std::string descricao, int prioridade, std::string cpf)
    : codigoPacote(codigo), descricao(descricao), prioridade(prioridade), cpfCliente(cpf) {}

int Pacote::getCodigo() const { return codigoPacote; }
std::string Pacote::getDescricao() const { return descricao; }
int Pacote::getPrioridade() const { return prioridade; }
std::string Pacote::getCpfCliente() const { return cpfCliente; }