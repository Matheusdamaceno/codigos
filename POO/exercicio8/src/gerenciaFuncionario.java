import java.util.Scanner;

public class gerenciaFuncionario {
  Scanner sc = new Scanner(System.in);
  telaGenFuncionario tgf = new telaGenFuncionario();
  funcionario f = new funcionario();
  telaFunc tf = new telaFunc();
  int op;

  void telaGFuncionario() {
    do {
      op = tgf.GFuncionario();
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
