
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
protected:
    std::string nome;
    int salario;

public:
    Funcionario(const std::string& nome, int salario);
    std::string getNome() const;
    void setNome(const std::string& nome);
    int getSalario() const;
    void setSalario(int salario);
    virtual std::string descricao() const;
};

#endif
