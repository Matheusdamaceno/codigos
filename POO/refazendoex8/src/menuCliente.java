public class menuCliente {
  void Gcliente() {
    telaCliente tc = new telaCliente();
    cliente c = new cliente();
    telaGcliente tgc = new telaGcliente();
    int op;
    do {
      op = tgc.gCliente();
      switch (op) {
        case 1:
          tc.lerDados(c);
          break;
        case 2:
          tc.apresentar(c);
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (op != 0);
  }
}
