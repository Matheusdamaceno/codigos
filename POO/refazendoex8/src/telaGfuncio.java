import java.util.Scanner;

public class telaGfuncio {
  Scanner sc = new Scanner(System.in);

  int gerenFunc() {
    int op;
    System.out.println("1 - Inserir dados do funcionario");
    System.out.println("2 - Apresentar dados do funcionario");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    return op;
  }
}
