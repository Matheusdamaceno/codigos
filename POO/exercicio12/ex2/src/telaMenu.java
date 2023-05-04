import java.util.Scanner;

public class telaMenu {
  Scanner sc = new Scanner(System.in);

  public int tmenu() {
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

  public void msgListaCheia() {
    System.out.println("A lista esta cheia!!");
  }

  public int selectLut() {
    Scanner sc = new Scanner(System.in);
    System.out.println("digite a posição do lutador (0 a 4):");
    return sc.nextInt();
  }

  public void msgLUTNExiste() {
    System.out.println("Este lutador n foi cadastrado!!");
  }
}
