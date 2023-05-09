
public class menu {
  void geren() {
    telaGenMenu gtm = new telaGenMenu();
    gerenciaCliente gc = new gerenciaCliente();
    gerenciaFuncionario gf = new gerenciaFuncionario();
    int op;
    do {
      op = gtm.Gmenu();
      switch (op) {
        case 1:
          System.out.println("---------------------------------------------------");
          gc.telaGCliente();
          System.out.println("---------------------------------------------------");
          break;
        case 2:
          System.out.println("---------------------------------------------------");
          gf.telaGFuncionario();
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
