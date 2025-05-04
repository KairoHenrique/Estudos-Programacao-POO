#include "Corrida.hpp"

// Calcula a quilometragem subtraindo a quilometragem inicial da final
double Corrida::calcularQuilometragemPercorrida() {
    return quilometragemFinal - quilometragemInicial;
}

// Calcula o valor da corrida de acordo com a quilometragem
double Corrida::valorFinal() {
    double precoPorKm = 3.75;
    return calcularQuilometragemPercorrida() * precoPorKm;
}