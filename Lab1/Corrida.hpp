#ifndef CORRIDA_HPP
#define CORRIDA_HPP

#include <string>

class Corrida {
public:
    std::string modeloCarro;
    std::string motorizacaoCarro;
    std::string fabricanteVeiculo;
    std::string nomeMotorista;
    double quilometragemInicial;
    double quilometragemFinal;
    double calcularQuilometragemPercorrida();
    double valorFinal();
};

#endif