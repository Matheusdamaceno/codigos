import java.util.Scanner;

public class telaCliente {
  Scanner sc = new Scanner(System.in);

  void lerDados(cliente c) {
    System.out.println("Digite o nome do cliente: ");
    c.setNome(sc.nextLine());
    System.out.println("Digite o endereco do cliente: ");
    c.setEnd(sc.nextLine());
    System.out.println("Digite o codigo do cliente: ");
    c.setCod(sc.nextInt());
  }

  void apresentar(cliente c) {
    System.out.println("Nome: " + c.getNome());
    System.out.println("Endereço: " + c.getEnd());
    System.out.println("Codigo: " + c.getCod());
  }
}
