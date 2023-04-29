import java.util.Scanner;

public class TelaCliente {
  Scanner sc = new Scanner(System.in);

  void setCLiente(cliente c) {
    System.out.println("Digite onome do cliente: ");
    c.setNome(sc.nextLine());
    System.out.println("Digite o codigo do cliente: ");
    c.setCodC(sc.nextInt());
    sc.nextLine();
  }

  void apresentar(cliente c) {
    System.out.println("nome: " + c.getNome());
    System.out.println("Codigo: " + c.getCodC());
  }
}
