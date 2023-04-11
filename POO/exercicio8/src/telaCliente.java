import java.util.Scanner;

public class telaCliente {
  Scanner sc = new Scanner(System.in);

  void lerDados(cliente c) {
    System.out.println("---------------------------------------------------");
    System.out.println("Digite o nome do cliente: ");
    c.setNome(sc.nextLine());
    System.out.println("Digite o endereço: ");
    c.setEnd(sc.nextLine());
    System.out.println("Digite o codigo: ");
    c.setCodC(sc.nextInt());
  }

  void apresentar(cliente c) {
    System.out.println("---------------------------------------------------");
    System.out.println("Nome do cliente: " + c.getNome());
    System.out.println("Endereço do cliente: " + c.getEnd());
    System.out.println("Codigo: " + c.getCodC());
  }

}
