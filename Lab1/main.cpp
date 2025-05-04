#include <iostream>
#include "Corrida.hpp"

int main() {
    Corrida corrida;

    std::cout << "Modelo do Carro: ";
    std::getline(std::cin, corrida.modeloCarro);

    std::cout << "Motorizacao do Carro: ";
    std::getline(std::cin, corrida.motorizacaoCarro);

    std::cout << "Fabricante do Veiculo: ";
    std::getline(std::cin, corrida.fabricanteVeiculo);

    std::cout << "Nome do Motorista: ";
    std::getline(std::cin, corrida.nomeMotorista);

    std::cout << "Quilometragem Inicial: ";
    std::cin >> corrida.quilometragemInicial;

    std::cout << "Quilometragem Final: ";
    std::cin >> corrida.quilometragemFinal;

    // Exibição dos dados da corrida e cálculos
    std::cout << "\nDados da Corrida:" << std::endl;
    std::cout << "Modelo do Carro: " << corrida.modeloCarro << std::endl;
    std::cout << "Motorizacao do Carro: " << corrida.motorizacaoCarro << std::endl;
    std::cout << "Fabricante do Veiculo: " << corrida.fabricanteVeiculo << std::endl;
    std::cout << "Nome do Motorista: " << corrida.nomeMotorista << std::endl;
    std::cout << "Quilometragem Percorrida: " << corrida.calcularQuilometragemPercorrida() << " km" << std::endl;
    std::cout << "Valor Final: R$ " << corrida.valorFinal() << std::endl;

    return 0;
}