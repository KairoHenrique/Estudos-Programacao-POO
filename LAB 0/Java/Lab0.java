import java.util.Scanner;

public class Lab0 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean italico = false;
        boolean negrito = false;

        System.out.println("Digite o texto linha por linha (para finalizar, pressione Enter em uma linha vazia):");

        while (true) {
            String linha = scanner.nextLine();
            
            if (linha.isEmpty()) {
                break;
            }

            String resultado = "";

            for (int i = 0; i < linha.length(); i++) {
                char caractere = linha.charAt(i);

                if (caractere == '_') {
                    if (italico) {
                        resultado += "</i>";
                    } else {
                        resultado += "<i>";
                    }
                    italico = !italico;
                } else if (caractere == '*') {
                    if (negrito) {
                        resultado += "</b>";
                    } else {
                        resultado += "<b>";
                    }
                    negrito = !negrito;
                } else {
                    resultado += caractere;
                }
            }

            System.out.println(resultado);
        }

        scanner.close();
    }
}
