import java.util.Scanner;

public class telaMenu {
  Scanner sc = new Scanner(System.in);

  int tmenu() {
    int op = 0;
    System.out.println("-----------------------------------------");
    System.out.println("1 - Inserir novo lutador                |");
    System.out.println("2 - Alterar lutador existente           |");
    System.out.println("3 - Apresentar dados de um lutador      |");
    System.out.println("4 - Apresentar lista de lutadores       |");
    System.out.println("-----------------------------------------");
    op = sc.nextInt();
    return op;
  }
}
