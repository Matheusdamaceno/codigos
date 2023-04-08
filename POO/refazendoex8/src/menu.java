public class menu {
  void menuApp() {
    int op;
    telaGMenu tgm = new telaGMenu();
    menuCliente mc = new menuCliente();
    menuFuncionario mf = new menuFuncionario();
    do {
      op = tgm.telaGmenu();
      switch (op) {
        case 1:
          mc.Gcliente();
          break;
        case 2:
          mf.Gfuncionario();
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (op != 0);
  }
}
