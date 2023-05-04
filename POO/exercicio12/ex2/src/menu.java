import java.util.ArrayList;

public class menu {
  private ArrayList<lutador> l = new ArrayList<lutador>();
  private telaLutador tl = new telaLutador();
  private telaMenu tm = new telaMenu();

  public void exe() {
    int op = 0;
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
          tl.listar(l);
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (op != 0);
  }

  private void criarLutador() {
    l.add(new lutador());
    tl.setLutador(l.get(l.size() - 1));
  }

  private void alterarLutador() {
    int pos = tm.selectLut();
    if (l.get(pos) != null)
      tl.setLutador(l.get(pos));
    else
      tm.msgLUTNExiste();
  }

  private void apresentar() {
    int pos = tm.selectLut();
    if (pos < l.size() && l.get(pos) != null) {
      tl.apresentar(l.get(pos));
    } else {
      tm.msgLUTNExiste();
    }
  }
}