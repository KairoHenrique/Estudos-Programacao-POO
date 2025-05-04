
public class Desenvolvedor extends Funcionario {
    private String linguagemPrincipal;

    public Desenvolvedor(String nome, int salario, String linguagemPrincipal) {
        super(nome, salario);
        this.linguagemPrincipal = linguagemPrincipal;
    }

    @Override
    public String descricao() {
        return super.descricao() + "\nLinguagem Principal: " + linguagemPrincipal;
    }
}
