#include "GerenciamentoPacotes.h"
#include <iostream>

void GerenciamentoPacotes::menu() {
    int opcao;
    do {
        std::cout << "\n=== {MENU} ===\n";
        std::cout << "1. Adicionar Cliente\n";
        std::cout << "2. Registrar Pacote\n";
        std::cout << "3. Processar Próximo Pacote\n";
        std::cout << "4. Exibir Fila de Entrada\n";
        std::cout << "5. Exibir Fila de Prioridade\n";
        std::cout << "6. Exibir Historico de Pacotes\n";
        std::cout << "7. Exibir Clientes\n";
        std::cout << "8. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao) {
            case 1: adicionarCliente(); break;
            case 2: registrarPacote(); break;
            case 3: processarProximoPacote(); break;
            case 4: filaEntrada.exibirPacotes(); break;
            case 5: filaPrioridade.exibirPacotes(); break;
            case 6: historico.exibirHistorico(); break;
            case 7: exibirClientes(); break;
            case 8: std::cout << "Saindo\n"; break;
            default: std::cout << "Opcao invalida!\n"; break;
        }
    } while (opcao != 8);
}

void GerenciamentoPacotes::adicionarCliente() {
    std::string nome, cpf;
    std::cout << "Nome do cliente: ";
    std::getline(std::cin, nome);
    std::cout << "CPF do cliente: ";
    std::getline(std::cin, cpf);
    
    listaClientes.adicionarCliente(Cliente(nome, cpf));
    std::cout << "Cliente adicionado com sucesso!\n";
}

void GerenciamentoPacotes::registrarPacote() {
    std::string cpf, descricao;
    int codigo, prioridade;

    std::cout << "CPF do cliente: ";
    std::getline(std::cin, cpf);

    if (!listaClientes.buscarCliente(cpf)) {
        std::cout << "Erro: Cliente nao encontrado!\n";
        return;
    }

    std::cout << "Codigo do Pacote: ";
    std::cin >> codigo;
    std::cin.ignore();
    std::cout << "Descricao do Pacote: ";
    std::getline(std::cin, descricao);
    std::cout << "Prioridade (1 = Urgente, 2 = Normal): ";
    std::cin >> prioridade;
    std::cin.ignore();

    Pacote pacote(codigo, descricao, prioridade, cpf);

    if (prioridade == 1) {
        filaPrioridade.adicionarPacote(pacote);
    } else {
        filaEntrada.adicionarPacote(pacote);
    }

    std::cout << "Pacote registrado com sucesso!\n";
}

void GerenciamentoPacotes::processarProximoPacote() {
    if (!filaPrioridade.estaVazia()) {
        Pacote pacote = filaPrioridade.removerPacote();
        historico.adicionarPacote(pacote);
        std::cout << "Pacote prioritario processado!\n";
    } else if (!filaEntrada.estaVazia()) {
        Pacote pacote = filaEntrada.removerPacote();
        historico.adicionarPacote(pacote);
        std::cout << "Pacote normal processado!\n";
    } else {
        std::cout << "Nenhum pacote para processar.\n";
    }
}

void GerenciamentoPacotes::exibirClientes() {
    listaClientes.exibirClientes();
}
