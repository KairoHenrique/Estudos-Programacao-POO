
public class TechLead extends Funcionario {
    private Gerente gerente;
    private Desenvolvedor desenvolvedor;
    private int projetosEmAndamento;

    public TechLead(String nome, int salario, int numeroEquipes, String linguagemPrincipal, int projetosEmAndamento) {
        super(nome, salario);
        this.gerente = new Gerente(nome, salario, numeroEquipes);
        this.desenvolvedor = new Desenvolvedor(nome, salario, linguagemPrincipal);
        this.projetosEmAndamento = projetosEmAndamento;
    }

    @Override
    public String descricao() {
        return super.descricao() + "\n" + gerente.descricao() + "\n" + desenvolvedor.descricao() + "\nProjetos em andamento: " + projetosEmAndamento;
    }
}
