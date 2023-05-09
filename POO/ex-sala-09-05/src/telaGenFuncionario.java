
import java.util.Scanner;

public class telaGenFuncionario {
  Scanner sc = new Scanner(System.in);

  public int GFuncionario() {
    int op;
    System.out.println("1 - Inserir dados do funcionario");
    System.out.println("2 - Apresentar dados do funcionario");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    return op;
  }
}
