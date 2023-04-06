import java.util.Scanner;

public class gerenciaCliente {
  Scanner sc = new Scanner(System.in);
  cliente c = new cliente();
  telaGenCliente tgc = new telaGenCliente();
  telaCliente tc = new telaCliente();
  int op;

  void telaGCliente() {
    do {

      op = tgc.GCliente();
      switch (op) {
        case 1:
          tc.lerDados(c);
          break;
        case 2:
          tc.apresentar(c);
          break;
        default:
          System.out.println("opção invalida");
          break;
      }
    } while (op != 0);
  }
}
