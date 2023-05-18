import java.util.Scanner;

public class telaGerenciador {
  Scanner sc = new Scanner(System.in);

  public int tGeren() {
    int op;
    System.out.println("\t----------MENU---------");
    System.out.println("1 - Modulo gerente");
    System.out.println("2 - Modulo vendedor");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    sc.nextLine();
    return op;
  }
}
