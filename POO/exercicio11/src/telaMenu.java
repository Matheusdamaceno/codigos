import java.util.Scanner;

public class telaMenu {
  Scanner sc = new Scanner(System.in);

  int tela() {
    int op = 0;
    System.out.println("-----------------------------------------------");
    System.out.println("1 - Criar Pokemon                               |");
    System.out.println("2 - Atualizar pokemon                           |");
    System.out.println("3 - Apresentar 1 pokemon                        |");
    System.out.println("4 - Apresentar lista de pokemon                 |");
    System.out.println("0 - Sair                                        |");
    System.out.println("-----------------------------------------------");
    op = sc.nextInt();
    return op;
  }
}
