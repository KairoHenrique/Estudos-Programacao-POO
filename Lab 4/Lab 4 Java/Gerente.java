
public class Gerente extends Funcionario {
    private int numeroEquipes;

    public Gerente(String nome, int salario, int numeroEquipes) {
        super(nome, salario);
        this.numeroEquipes = numeroEquipes;
    }

    @Override
    public String descricao() {
        return super.descricao() + "\nNumero de Equipes: " + numeroEquipes;
    }
}
