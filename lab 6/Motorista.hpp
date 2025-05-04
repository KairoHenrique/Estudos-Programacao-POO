#ifndef MOTORISTA_HPP
#define MOTORISTA_HPP

#include <string>

class Motorista {
private:
    std::string nome;
    std::string cpf;
    std::string categoriaHabilitacao;
public:
    Motorista();
    Motorista(std::string nome, std::string cpf, std::string categoriaHabilitacao);

    std::string obterNome() const;
    std::string obterCPF() const;
    std::string obterCategoriaHabilitacao() const;

    void definirNome(std::string nome);
    void definirCPF(std::string cpf);
    void definirCategoriaHabilitacao(std::string categoriaHabilitacao);

    std::string obterDetalhes() const;
};

#endif // MOTORISTA_HPP
