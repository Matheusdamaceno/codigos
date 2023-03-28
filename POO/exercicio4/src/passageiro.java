
import java.util.Scanner;

public class passageiro {
  String nome;
  int assento;
  String end;
  String genero;
  String aux;
  Scanner sc = new Scanner(System.in);

  passageiro(String genero) {
    this.genero = genero;
  }

  void lerDados() {
    System.out.println("Digite o nome: ");
    nome = sc.nextLine();
    System.out.println("Digite o assento: ");
    assento = sc.nextInt();
    // sc.nextLine();
    clearBuffer(sc);
    System.out.println("Digite o endereço: ");
    end = sc.nextLine();
    System.out.println("Digite o genero: ");
    aux = sc.nextLine();
  }

  void apresentar() {
    System.out.println("Nome: " + nome);
    System.out.println("Assento : " + assento);
    System.out.println("Endereço: " + end);

    if (aux.equals("")) {
      System.out.println("Genero: " + genero);
    } else {
      System.out.println("Genero: " + aux);
    }
  }

  private static void clearBuffer(Scanner scanner) {
    if (scanner.hasNextLine()) {
      scanner.nextLine();
    }
  }
}
