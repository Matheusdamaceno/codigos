import java.util.Scanner;

public class TelaGremedio {
  public int telaGerencia() {
    Scanner sc1 = new Scanner(System.in);
    int op;
    System.out.println("1 - Digitar remedio: ");
    System.out.println("2- Apresentar remedio: ");
    System.out.println("0- sair");
    op = sc1.nextInt();
    sc1.close();
    return op;
  }
}
