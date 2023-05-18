public class gerenciaVendedor {
  public void gerenVendedor() {
    telaVendedor tv = new telaVendedor();
    int op = 0;
    do {
      op = tv.tVend();
      switch (op) {
        case 1:
          tv.criarVendedor();
          break;
        case 2:
          tv.listar();
          break;
        case 3:
          tv.listarTodos();
          break;
        default:
          break;
      }
    } while (op != 0);
  }
}
