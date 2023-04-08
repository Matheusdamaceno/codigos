import java.util.Scanner;

public class telaGcliente {
  Scanner sc = new Scanner(System.in);

  int gCliente() {
    int op;
    System.out.println("1 - Inserir dados do cliente");
    System.out.println("2 - Apresentar dados do cliente");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    return op;
  }
}
