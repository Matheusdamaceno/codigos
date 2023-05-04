import java.util.Scanner;

public class Gerenciador {
  Scanner sc = new Scanner(System.in);

  private void cadastrarGenerico(Pessoa p) {
    // POLIMORFISMO
    System.out.println("Conectando...");
    System.out.println("Conectado...");
    System.out.println("Pronto...");
    p.cadastrar();
  }

  public void executar() {
    Cliente c = new Cliente();
    Funcionario f = new Funcionario();
    int opc;

    do {
      System.out.println("MENU");
      System.out.println("1- Cadastrar cleinte");
      System.out.println("2 - cadastrar funcionario");
      System.out.println("0 - sair");
      opc = sc.nextInt();
      switch (opc) {
        case 1:
          cadastrarGenerico(c);
          break;
        case 2:
          cadastrarGenerico(f);
          break;
        case 0:
          System.out.println("Saindo");
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (opc != 0);

    // cadastrarGenerico(c);
    // cadastrarGenerico(f);
  }
}
