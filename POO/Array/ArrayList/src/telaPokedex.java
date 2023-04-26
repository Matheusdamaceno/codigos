import java.util.Scanner;

public class telaPokedex {
  Scanner sc = new Scanner(System.in);

  public int menu() {

    System.out.println("Menu");
    System.out.println("1 criar");
    System.out.println("2 ");
    System.out.println("3");
    System.out.println("4");
    System.out.println("0");
    return sc.nextInt();
  }

  public void msgListaCheia() {
    System.out.println("A lista esta cheia!!");
  }

  public int selectPokemon() {
    Scanner sc = new Scanner(System.in);
    System.out.println("digite a posição do pokemon (0 a 4):");
    sc.close();
    return sc.nextInt();
  }

  public void msgPokemonNExiste() {
    System.out.println("Este pokemon n foi criado!!");
  }
}
