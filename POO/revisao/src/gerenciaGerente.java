public class gerenciaGerente {

  public void gerenGerente() {
    telaGerente tg = new telaGerente();

    int op = 0;
    do {
      op = tg.tGeren();
      switch (op) {
        case 1:
          tg.criarGerente();
          break;
        case 2:
          tg.listar();
          break;
        case 3:
          tg.listarTodos();
          break;
        default:
          System.out.println("invalido tigrao!!");
          break;
      }
    } while (op != 0);
  }
}
