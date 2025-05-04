import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Biblioteca biblioteca = new Biblioteca(100);

        while (true) {
            System.out.println("\nMenu:");
            System.out.println("1. Adicionar livro");
            System.out.println("2. Buscar livro");
            System.out.println("3. Mostrar todos os livros");
            System.out.println("4. Sair");
            System.out.print("Escolha uma opcao: ");
            int opcao = scanner.nextInt();
            scanner.nextLine();

            switch (opcao) {
                case 1:
                    System.out.print("Digite o titulo do livro: ");
                    String titulo = scanner.nextLine();
                    System.out.print("Digite o nome do autor: ");
                    String nomeAutor = scanner.nextLine();
                    Autor autor = new Autor(nomeAutor);
                    System.out.print("Digite o ISBN do livro: ");
                    String isbn = scanner.nextLine();

                    Livro livro = new Livro(titulo, autor, isbn);
                    if (biblioteca.adicionarLivro(livro)) {
                        System.out.println("Livro adicionado com sucesso!");
                    } else {
                        System.out.println("A biblioteca esta cheia.");
                    }
                    break;

                case 2:
                    System.out.print("Digite o titulo do livro que deseja buscar: ");
                    String tituloBusca = scanner.nextLine();
                    Livro livroEncontrado = biblioteca.buscarLivro(tituloBusca);
                    if (livroEncontrado != null) {
                        System.out.println("Livro encontrado: " + livroEncontrado);
                    } else {
                        System.out.println("Livro nao encontrado.");
                    }
                    break;

                case 3:
                    biblioteca.mostrarLivros();
                    break;

                case 4:
                    System.out.println("Programa encerrado ");
                    scanner.close();
                    return;

                default:
                    System.out.println("Opcao invalida.");
            }
        }
    }
}
