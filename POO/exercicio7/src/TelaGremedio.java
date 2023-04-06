import java.util.Scanner;

public class TelaGremedio {
  Scanner sc1 = new Scanner(System.in);

  public int telaGerencia() {
    int op;
    System.out.println("1 - Digitar remedio: ");
    System.out.println("2- Apresentar remedio: ");
    System.out.println("0- sair");
    op = sc1.nextInt();
    // sc1.nextLine();
    /// sc1.close();
    return op;
  }
}
