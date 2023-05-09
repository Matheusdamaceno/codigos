import java.util.Scanner;

public class telaGenMenu {
  Scanner sc = new Scanner(System.in);

  public int Gmenu() {
    int op;
    System.out.println("1 - Entrar no modulo cliente");
    System.out.println("2 - Entrar modulo funcionario");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    return op;
  }

}
