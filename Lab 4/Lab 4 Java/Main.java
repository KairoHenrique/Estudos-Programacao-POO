
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("----------");
            System.out.println("1 - Cadastrar Funcionario");
            System.out.println("2 - Cadastrar Gerente");
            System.out.println("3 - Cadastrar Desenvolvedor");
            System.out.println("4 - Cadastrar TechLead");
            System.out.println("5 - Sair");
            opcao = scanner.nextInt();
            scanner.nextLine();

            if (opcao == 1) {
                System.out.print("Digite o nome do Funcionario: ");
                String nome = scanner.nextLine();
                System.out.print("Digite o salario do Funcionario: ");
                int salario = scanner.nextInt();
                Funcionario funcionario = new Funcionario(nome, salario);
                System.out.println(funcionario.descricao());
            } else if (opcao == 2) {
                System.out.print("Digite o nome do Gerente: ");
                String nome = scanner.nextLine();
                System.out.print("Digite o salario do Gerente: ");
                int salario = scanner.nextInt();
                System.out.print("Digite o numero de equipes do Gerente: ");
                int numeroEquipes = scanner.nextInt();
                Gerente gerente = new Gerente(nome, salario, numeroEquipes);
                System.out.println(gerente.descricao());
            } else if (opcao == 3) {
                System.out.print("Digite o nome do Desenvolvedor: ");
                String nome = scanner.nextLine();
                System.out.print("Digite o salario do Desenvolvedor: ");
                int salario = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Digite a linguagem principal do Desenvolvedor: ");
                String linguagemPrincipal = scanner.nextLine();
                Desenvolvedor desenvolvedor = new Desenvolvedor(nome, salario, linguagemPrincipal);
                System.out.println(desenvolvedor.descricao());
            } else if (opcao == 4) {
                System.out.print("Digite o nome do TechLead: ");
                String nome = scanner.nextLine();
                System.out.print("Digite o salario do TechLead: ");
                int salario = scanner.nextInt();
                System.out.print("Digite o numero de equipes do TechLead: ");
                int numeroEquipes = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Digite a linguagem principal do TechLead: ");
                String linguagemPrincipal = scanner.nextLine();
                System.out.print("Digite o numero de projetos em andamento do TechLead: ");
                int projetosEmAndamento = scanner.nextInt();
                TechLead techLead = new TechLead(nome, salario, numeroEquipes, linguagemPrincipal, projetosEmAndamento);
                System.out.println(techLead.descricao());
            }
        } while (opcao != 5);

        scanner.close();
    }
}
