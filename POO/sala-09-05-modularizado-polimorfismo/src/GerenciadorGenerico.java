public class GerenciadorGenerico {
  telaCliente tc = new telaCliente();
  telaFunc tf = new telaFunc();
  cliente c = new cliente();
  funcionario f = new funcionario();

  public void gerenciar(int modulo) {
    Pessoa p;
    telaPessoa tp;
    int op = 0;

    if (modulo == 1) {
      p = c;
      tp = tc;
    } else {
      p = f;
      tp = tf;
    }

    do {

      op = tp.menu();
      switch (op) {
        case 1:
          tp.lerDados(p);
          break;
        case 2:
          tp.apresentar(p);
          break;
        default:
          System.out.println("opção invalida");
          break;
      }
    } while (op != 0);
  }
}
