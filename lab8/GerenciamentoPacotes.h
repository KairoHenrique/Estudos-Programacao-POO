#ifndef GERENCIAMENTOPACOTES_H
#define GERENCIAMENTOPACOTES_H

#include "ListaClientes.h"
#include "FilaEntradaPacotes.h"
#include "FilaPrioridadePacotes.h"
#include "HistoricoPacotes.h"

class GerenciamentoPacotes {
private:
    ListaClientes listaClientes;
    FilaEntradaPacotes filaEntrada;
    FilaPrioridadePacotes filaPrioridade;
    HistoricoPacotes historico;

public:
    void menu();
    void adicionarCliente();
    void registrarPacote();
    void processarProximoPacote();
    void exibirFilas();
    void exibirHistorico();
    void exibirClientes();
};

#endif
