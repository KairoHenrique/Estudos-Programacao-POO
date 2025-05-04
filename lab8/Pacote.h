#ifndef PACOTE_H
#define PACOTE_H

#include <string>

class Pacote {
private:
    int codigoPacote;
    std::string descricao;
    int prioridade;
    std::string cpfCliente;

public:
    Pacote(int codigo, std::string descricao, int prioridade, std::string cpf);
    
    int getCodigo() const;
    std::string getDescricao() const;
    int getPrioridade() const;
    std::string getCpfCliente() const;
};

#endif