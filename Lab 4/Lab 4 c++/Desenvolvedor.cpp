
#include "Desenvolvedor.h"

Desenvolvedor::Desenvolvedor(const std::string& nome, int salario, const std::string& linguagemPrincipal)
    : Funcionario(nome, salario), linguagemPrincipal(linguagemPrincipal) {}

std::string Desenvolvedor::getLinguagemPrincipal() const {
    return linguagemPrincipal;
}

void Desenvolvedor::setLinguagemPrincipal(const std::string& linguagemPrincipal) {
    this->linguagemPrincipal = linguagemPrincipal;
}

std::string Desenvolvedor::projetosRealizados() const {
    return "\nProjetos entregues na linguagem " + linguagemPrincipal;
}

std::string Desenvolvedor::descricaoDesenvolvedor() const {
    return "\nLinguagem do desenvolvedor: " + linguagemPrincipal;
}

std::string Desenvolvedor::descricao() const {
    return Funcionario::descricao() + descricaoDesenvolvedor();
}
