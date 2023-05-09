
public class menu {
  void geren() {
    telaGenMenu gtm = new telaGenMenu();
    GerenciadorGenerico gg = new GerenciadorGenerico();
    int op;
    do {
      op = gtm.Gmenu();
      switch (op) {
        case 1:
          System.out.println("---------------------------------------------------");
          gg.gerenciar(op);
          System.out.println("---------------------------------------------------");
          break;
        case 2:
          System.out.println("---------------------------------------------------");
          gg.gerenciar(op);
          System.out.println("---------------------------------------------------");
          break;
        case 0:
          System.out.println("Saindo..");
        default:
          System.out.println("invalido");
          break;
      }
    } while (op != 0);
  }
}
