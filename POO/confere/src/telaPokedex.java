import java.util.Scanner;

public class telaPokedex {
  Scanner sc = new Scanner(System.in);

  int menu() {
    int op = 0;
    System.out.println("1 - Add pokemon");
    System.out.println("2 - Atualizar pokemon");
    System.out.println("3 - Apresentar pokemon");
    System.out.println("4 - Listar pokedex");
    op = sc.nextInt();
    return op;
  }
}
