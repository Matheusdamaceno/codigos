import java.util.Scanner;

public class pokedex {
  Scanner sc = new Scanner(System.in);
  pokemon pok = new pokemon();

  void criarPoke() {
    System.out.println("Digite o nome do pokemon: ");
    pok.setNome(sc.nextLine());
    System.out.println("Digite a vida do pokemon: ");
    pok.setVida(sc.nextInt());
    System.out.println("Digite o atk do pokemon: ");
    pok.setAtk(sc.nextInt());
    System.out.println("Digite a def do pokemon: ");
    pok.setDef(sc.nextInt());
    sc.nextLine();
  }

  void apresentar() {
    System.out.println("Nome: " + pok.getNome());
    System.out.println("Vida: " + pok.getVida());
    System.out.println("Atk: " + pok.getAtk());
    System.out.println("Def: " + pok.getDef());
  }
}
