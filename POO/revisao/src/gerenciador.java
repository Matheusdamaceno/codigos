public class gerenciador {
  public void menu() {
    telaGerenciador tlg = new telaGerenciador();
    gerenciaGerente gg = new gerenciaGerente();
    gerenciaVendedor gv = new gerenciaVendedor();
    int op = 0;
    do {
      op = tlg.tGeren();
      switch (op) {
        case 1:
          gg.gerenGerente();
          break;
        case 2:
          gv.gerenVendedor();
          break;
        default:
          break;
      }
    } while (op != 0);
  }
}
