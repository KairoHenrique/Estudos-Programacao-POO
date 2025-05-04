
public class Funcionario {
    protected String nome;
    protected int salario;

    public Funcionario(String nome, int salario) {
        this.nome = nome;
        this.salario = salario;
    }

    public String descricao() {
        return "Nome: " + nome + "\nSalario: " + salario;
    }
}
