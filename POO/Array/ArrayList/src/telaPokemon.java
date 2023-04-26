import java.util.Scanner;
import java.util.ArrayList;

public class telaPokemon {
  Scanner sc = new Scanner(System.in);

  public void setPokemon(pokemon p) {

    System.out.println("Digite nome: ");
    p.setNome(sc.nextLine());
    System.out.println("Digite otipo:");
    // p.setTipo(sc.nextLine());
    System.out.println("Digite o atk:");
    p.setAtk(sc.nextInt());
    System.out.println("Digite a def");
    p.setDef(sc.nextInt());
    sc.nextLine();
  }

  public void apresentar(pokemon p) {
    if (p != null) {
      System.out.println("Nome: " + p.getNome());
      // System.out.println("Tipo: " + p.getTipo());
      System.out.println("Atk: " + p.getAtk());
      System.out.println("def: " + p.getDef());
    }
  }

  public void listar(ArrayList<pokemon> lista) {
    for (int i = 0; i < lista.size(); i++) {
      apresentar(lista.get(i));
    }
  }

}
