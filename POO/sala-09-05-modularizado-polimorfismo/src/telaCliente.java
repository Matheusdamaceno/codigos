import java.util.Scanner;

public class telaCliente extends telaPessoa {
  Scanner sc = new Scanner(System.in);

  public void lerDados(Pessoa x) {
    cliente c = (cliente) x;
    System.out.println("---------------------------------------------------");
    System.out.println("Digite o nome do cliente: ");
    c.setNome(sc.nextLine());
    System.out.println("Digite o endereço: ");
    c.setEnd(sc.nextLine());
    System.out.println("Digite o codigo: ");
    c.setCodC(sc.nextInt());
  }

  public void apresentar(Pessoa x) {
    cliente c = (cliente) x;
    System.out.println("---------------------------------------------------");
    System.out.println("Nome do cliente: " + c.getNome());
    System.out.println("Endereço do cliente: " + c.getEnd());
    System.out.println("Codigo: " + c.getCodC());
  }

  public int menu() {
    int op;

    System.out.println("1 - Inserir dados de cliente");
    System.out.println("2 - Apresentar dados de cliente");
    System.out.println("0 - Sair");
    op = sc.nextInt();
    sc.nextLine();
    return op;
  }
}
