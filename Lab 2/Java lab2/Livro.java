public class Livro {
    private String titulo;
    private Autor autor;
    private String isbn;

    public Livro(String titulo, Autor autor, String isbn) {
        this.titulo = titulo;
        this.autor = autor;
        this.isbn = isbn;
    }

    public String getTitulo() {
        return titulo;
    }

    public Autor getAutor() {
        return autor;
    }

    public String getIsbn() {
        return isbn;
    }

    @Override
    public String toString() {
        return "Titulo: " + titulo + ", Autor: " + autor.getNome() + ", ISBN: " + isbn;
    }
}
