import java.util.ArrayList;
import java.util.Scanner;

public class menu {
  Scanner sc = new Scanner(System.in);
  int cont = 0;
  ArrayList<lutador> l = new ArrayList<lutador>();
  telaLutador tl = new telaLutador();

  void exe() {
    int op = 0;
    telaMenu tm = new telaMenu();
    do {
      op = tm.tmenu();
      switch (op) {
        case 1:
          criarLutador();
          break;
        case 2:
          alterarLutador();
          break;
        case 3:
          apresentar();
          break;
        case 4:
          listar();
          break;
        default:
          break;
      }
    } while (op != 0);
  }

  void criarLutador() {
    if (cont <= 10) {
      l.add(new lutador());
      tl.setLutador(l.get(cont));
    } else {
      tl.msgFull();
    }
  }

  void alterarLutador() {
    int opc = 0;
    tl.msgEscolha();
    opc = sc.nextInt();
    tl.setLutador(l.get(opc));
  }

  void apresentar() {
    int opc = 0;
    tl.msgEscolha();
    opc = sc.nextInt();
    tl.apresentar(l.get(opc - 1));
  }

  void listar() {
    for (int i = 0; i < l.size(); i++) {
      tl.apresentar(l.get(i));
    }
  }
}