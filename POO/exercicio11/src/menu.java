import java.util.Scanner;

public class menu {
  Scanner sc = new Scanner(System.in);

  void gerenciarMenu() {
    int op;
    telaMenu tm = new telaMenu();
    int count = 0;
    pokedex[] pdex = new pokedex[5];
    do {
      op = tm.tela();
      switch (op) {
        case 1:
          if (count >= pdex.length) {
            System.out.println("Pokedex lotada!!");
          } else {
            pdex[count] = new pokedex();
            pdex[count].criarPoke();
            count++;
          }
          break;
        case 2:
          count = 0;
          System.out.println("Qual pokemon quer atualizar?");
          count = (sc.nextInt() - 1);
          pdex[count].criarPoke();
          break;
        case 3:
          count = 0;
          System.out.println("Qual pokemon quer apresentar?");
          count = (sc.nextInt() - 1);
          pdex[count].apresentar();
          break;
        case 4:
          for (int i = 0; i < pdex.length; i++) {
            if (pdex[i] == null) {
              System.out.println("Não existe");
            } else {
              pdex[i].apresentar();
            }
          }
          break;
        default:
          System.out.println("invalido");
          break;
      }

    } while (op != 0);
  }
}
