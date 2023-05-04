import java.util.Scanner;
import java.util.ArrayList;

public class telaLutador {
  Scanner sc = new Scanner(System.in);

  void setLutador(lutador l) {
    System.out.println("Digite o nome do lutador: ");
    l.setNome(sc.nextLine());
    System.out.println("Digite o codigo do lutador: ");
    l.setCod(sc.nextInt());
    sc.nextLine();
    System.out.println("Digite o endereço do lutador: ");
    l.setEnd(sc.nextLine());
    System.out.println("Digite a faixa do lutador: ");
    l.setFaixa(sc.nextLine());
    sc.nextLine();
  }

  void apresentar(lutador l) {
    System.out.println("Nome: " + l.getNome());
    System.out.println("Codigo: " + l.getCod());
    System.out.println("Endereço: " + l.getEnd());
    System.out.println("Faixa: " + l.getFaixa());
  }

  public void listar(ArrayList<lutador> l) {
    for (int i = 0; i < l.size(); i++) {
      System.out.println("\n--------------------------");
      apresentar(l.get(i));
    }
  }
}
