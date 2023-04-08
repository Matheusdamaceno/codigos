import java.util.Scanner;

public class telaGMenu {
  Scanner sc = new Scanner(System.in);

  int telaGmenu() {
    int op;
    System.out.println("1 - Para entrar no modulo cliente");
    System.out.println("2 - Para entrar no modulo funcionario");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    return op;
  }
}
