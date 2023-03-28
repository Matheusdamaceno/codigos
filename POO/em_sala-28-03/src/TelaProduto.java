import java.util.Scanner;

public class TelaProduto {
  void ler(produto g) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Digite o nome do produto: ");
    g.nome = sc.nextLine();
    System.out.println("Digite a descricao do produto: ");
    g.desc = sc.nextLine();
    System.out.println("Digite o preco do produto: ");
    g.preco = sc.nextFloat();
    sc.close();
  }

  void apresentar(produto g) {
    System.out.println("Nome: " + g.nome);
    System.out.println("Descricao: " + g.desc);
    System.out.println("Preco: " + g.preco);
  }
}
