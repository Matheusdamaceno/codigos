public class menuFuncionario {
  void Gfuncionario() {
    int op;
    telaGfuncio tgf = new telaGfuncio();
    telaFuncionario tf = new telaFuncionario();
    funcionario f = new funcionario();
    do {
      op = tgf.gerenFunc();
      switch (op) {
        case 1:
          tf.lerDados(f);
          break;
        case 2:
          tf.apresentar(f);
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (op != 0);
  }
}
