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
        gc.telaGCliente();
        break;
        case 2:
        gf.telaGFuncionario();
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (op != 0);
  }
}
