public class Biblioteca {
    private Livro[] livros;
    private int quantidadeLivros;

    public Biblioteca(int capacidade) {
        livros = new Livro[capacidade];
        quantidadeLivros = 0;
    }

    public boolean adicionarLivro(Livro livro) {
        if (quantidadeLivros < livros.length) {
            livros[quantidadeLivros] = livro;
            quantidadeLivros++;
            return true;
        }
        return false;
    }

    public Livro buscarLivro(String titulo) {
        for (int i = 0; i < quantidadeLivros; i++) {
            if (livros[i].getTitulo().equalsIgnoreCase(titulo)) {
                return livros[i];
            }
        }
        return null;
    }

    public void mostrarLivros() {
        if (quantidadeLivros == 0) {
            System.out.println("A biblioteca esta vazia.");
        } else {
            System.out.println("Livros na biblioteca:");
            for (int i = 0; i < quantidadeLivros; i++) {
                System.out.println(livros[i]);
            }
        }
    }
}
