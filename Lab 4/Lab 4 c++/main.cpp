
#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Gerente.h"
#include "Desenvolvedor.h"
#include "TechLead.h"

int main() {
    int op;
    do {
        std::cout << "----------\n";
        std::cout << "1 - Cadastrar Funcionario\n";
        std::cout << "2 - Cadastrar Gerente\n";
        std::cout << "3 - Cadastrar Desenvolvedor\n";
        std::cout << "4 - Cadastrar TechLead\n";
        std::cout << "5 - Sair\n";
        std::cin >> op;
        std::cin.ignore();

        switch (op) {
            case 1: {
                std::string nome;
                int salario;
                std::cout << "Digite o nome do Funcionario: ";
                std::getline(std::cin, nome);
                std::cout << "Digite o salario do Funcionario: ";
                std::cin >> salario;
                Funcionario funcionario(nome, salario);
                std::cout << funcionario.descricao() << "\n";
                break;
            }
            case 2: {
                std::string nome;
                int salario, numeroEquipes;
                std::cout << "Digite o nome do Gerente: ";
                std::getline(std::cin, nome);
                std::cout << "Digite o salario do Gerente: ";
                std::cin >> salario;
                std::cout << "Digite o numero de equipes do Gerente: ";
                std::cin >> numeroEquipes;
                Gerente gerente(nome, salario, numeroEquipes);
                std::cout << gerente.descricao() << "\n";
                break;
            }
            case 3: {
                std::string nome, linguagemPrincipal;
                int salario;
                std::cout << "Digite o nome do Desenvolvedor: ";
                std::getline(std::cin, nome);
                std::cout << "Digite o salario do Desenvolvedor: ";
                std::cin >> salario;
                std::cin.ignore();
                std::cout << "Digite a linguagem do Desenvolvedor: ";
                std::getline(std::cin, linguagemPrincipal);
                Desenvolvedor desenvolvedor(nome, salario, linguagemPrincipal);
                std::cout << desenvolvedor.descricao() << "\n";
                break;
            }
            case 4: {
                std::string nome, linguagemPrincipal;
                int salario, numeroEquipes, numeroProjetos;
                std::cout << "Digite o nome do TechLead: ";
                std::getline(std::cin, nome);
                std::cout << "Digite o salario do TechLead: ";
                std::cin >> salario;
                std::cout << "Digite o numero de equipes do TechLead: ";
                std::cin >> numeroEquipes;
                std::cin.ignore();
                std::cout << "Digite a linguagem do TechLead: ";
                std::getline(std::cin, linguagemPrincipal);
                std::cout << "Digite o numero de projetos do TechLead: ";
                std::cin >> numeroProjetos;
                TechLead techLead(nome, salario, numeroEquipes, linguagemPrincipal, numeroProjetos);
                std::cout << techLead.descricao() << "\n";
                break;
            }
            case 5:
                std::cout << "Saindo\n";
                break;
            default:
                std::cout << "Opcao invalida!\n";
        }
    } while (op != 5);

    return 0;
}
