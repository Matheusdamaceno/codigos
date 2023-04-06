import java.util.Scanner;

public class telaGenCliente {
  Scanner sc = new Scanner(System.in);

  public int GCliente() {
    int op;
    System.out.println("1 - Inserir dados de cliente");
    System.out.println("2 - Apresentar dados de cliente");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    return op;
  }

}
