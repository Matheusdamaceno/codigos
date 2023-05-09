
import java.util.Scanner;

public class telaFunc extends telaPessoa {
  Scanner sc = new Scanner(System.in);

  public void lerDados(Pessoa p) {
    funcionario f = (funcionario) p;
    System.out.println("---------------------------------------------------");
    System.out.println("Digite o nome do funcionario: ");
    f.setNome(sc.nextLine());
    sc.nextLine();
    System.out.println("Digite o endereço do funcionario: ");
    f.setEnd(sc.nextLine());
    System.out.println("Digite o salario: ");
    f.setSalario(sc.nextFloat());
  }

  public void apresentar(Pessoa p) {
    funcionario f = (funcionario) p;
    System.out.println("---------------------------------------------------");
    System.out.println("Nome: " + f.getNome());
    System.out.println("Endereco: " + f.getEnd());
    System.out.println("Salario: " + f.getSalario());
  }

  public int menu() {
    int op;
    System.out.println("1 - Inserir dados do funcionario");
    System.out.println("2 - Apresentar dados do funcionario");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    sc.nextLine();
    return op;
  }
}
