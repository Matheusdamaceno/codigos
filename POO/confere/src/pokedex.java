import java.util.Scanner;

public class pokedex {
  Scanner sc = new Scanner(System.in);

  void setPokemon(pokemon p) {
    System.out.println("Digite o nome do pokemon: ");
    p.setNome(sc.nextLine());
    System.out.println("Digite o tipo do pokemon: ");
    p.setTipo(sc.nextLine());
    System.out.println("Digite a vida do pokemon: ");
    p.setVida(sc.nextInt());
    System.out.println("Digite o atk do pokemon: ");
    p.setAtk(sc.nextInt());
    System.out.println("Digite a def do pokemon: ");
    p.setDef(sc.nextInt());
    sc.nextLine();
  }

  void apresentar(pokemon p) {
    System.out.println("Nome: " + p.getNome());
    System.out.println("Tipo: " + p.getTipo());
    System.out.println("Vida: " + p.getVida());
    System.out.println("Atk: " + p.getAtk());
    System.out.println("Def: " + p.getDef());
  }
}
