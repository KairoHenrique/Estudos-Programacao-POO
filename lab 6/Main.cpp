#include <iostream>
#include <string>
#include "ListaMotoristas.hpp"
#include "ListaVeiculos.hpp"
#include "ListaViagens.hpp"
#include "Caminhao.hpp"
#include "Carro.hpp"
#include "Moto.hpp"

void mostrarMenu() {
    std::cout << "\n=== Sistema de Gerenciamento de Viagens ===\n";
    std::cout << "1. Cadastrar Motorista\n";
    std::cout << "2. Cadastrar Veículo\n";
    std::cout << "3. Registrar Viagem\n";
    std::cout << "4. Exibir Detalhes de Viagens\n";
    std::cout << "5. Excluir Motorista\n";
    std::cout << "6. Excluir Veículo\n";
    std::cout << "7. Sair\n";
    std::cout << "Escolha uma opção: ";
}

int main() {
    ListaMotoristas listaMotoristas;
    ListaVeiculos listaVeiculos;
    ListaViagens listaViagens;

    int opcao;
    do {
        mostrarMenu();
        std::cin >> opcao;
	std::cin.ignore();

        switch (opcao) {
        case 1: {
            std::string nome, cpf, categoria;
            std::cout << "Nome do motorista: ";
            std::cin >> nome;
            std::cout << "CPF do motorista: ";
            std::cin >> cpf;
            std::cout << "Categoria da habilitação (A, B, C): ";
            std::cin >> categoria;
            listaMotoristas.adicionarMotorista(Motorista(nome, cpf, categoria));
            std::cout << "Motorista cadastrado com sucesso!\n";
            break;
        }
        case 2: {
            int tipo;
            std::cout << "Tipo de veículo (1: Carro, 2: Caminhão, 3: Moto): ";
            std::cin >> tipo;
            std::string placa, modelo;
            std::cout << "Placa do veículo: ";
            std::cin >> placa;
            std::cout << "Modelo do veículo: ";
            std::cin >> modelo;

            if (tipo == 1) {
                int assentos;
                std::cout << "Número de assentos: ";
                std::cin >> assentos;
                listaVeiculos.adicionarVeiculo(new Carro(placa, modelo, assentos));
            } else if (tipo == 2) {
                double carga;
                std::cout << "Capacidade de carga (em kg): ";
                std::cin >> carga;
                listaVeiculos.adicionarVeiculo(new Caminhao(placa, modelo, carga));
            } else if (tipo == 3) {
                int cilindradas;
                std::cout << "Cilindradas da moto: ";
                std::cin >> cilindradas;
                listaVeiculos.adicionarVeiculo(new Moto(placa, modelo, cilindradas));
            }
            std::cout << "Veículo cadastrado com sucesso!\n";
            break;
        }
        case 3: {
            std::string cpf, placa;
            double distancia;
            std::cout << "CPF do motorista: ";
            std::cin >> cpf;
            std::cout << "Placa do veículo: ";
            std::cin >> placa;
            std::cout << "Distância da viagem (em km): ";
            std::cin >> distancia;

            Motorista* motorista = listaMotoristas.buscarMotoristaPorCPF(cpf);
            Veiculo* veiculo = listaVeiculos.buscarVeiculoPorPlaca(placa);

            if (motorista && veiculo) {
                listaViagens.adicionarViagem(Viagem(*motorista, veiculo, distancia));
                std::cout << "Viagem registrada com sucesso!\n";
            } else {
                std::cout << "Motorista ou veículo não encontrado.\n";
            }
            break;
        }
        case 4: {
            const auto& viagens = listaViagens.obterViagens();
            if (viagens.empty()) {
                std::cout << "Nenhuma viagem registrada.\n";
            } else {
                for (const auto& viagem : viagens) {
                    std::cout << viagem.obterDetalhes() << "\n";
                }
            }
            break;
        }
        case 5: {
            std::string cpf;
            std::cout << "CPF do motorista a ser excluído: ";
std::cin >> cpf;
            listaMotoristas.removerMotoristaPorCPF(cpf);
            std::cout << "Motorista removido com sucesso!\n";
            break;
        }
        case 6: {
            std::string placa;
            std::cout << "Placa do veículo a ser excluído: ";
            std::cin >> placa;
            listaVeiculos.removerVeiculoPorPlaca(placa);
            std::cout << "Veículo removido com sucesso!\n";
            break;
        }
        case 7:
            std::cout << "Encerrando o sistema...\n";
            break;
        default:
            std::cout << "Opção inválida. Tente novamente.\n";
        }
    } while (opcao != 7);

    return 0;
}