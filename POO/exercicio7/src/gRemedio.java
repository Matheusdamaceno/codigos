
public class gRemedio {
  public void Geren() {
    Remedio r = new Remedio();
    TelaR tr = new TelaR();
    TelaGremedio gtl = new TelaGremedio();

    int op;

    do {
      op = gtl.telaGerencia();

      switch (op) {
        case 1:
          tr.setRemedio(r);
          break;
        case 2:
          tr.apresentar(r);
          break;
        case 0:
          System.out.println("bye fi");
          break;
        default:
          System.out.println("nem tenta");
          break;
      }
    } while (op != 0);
  }
}
