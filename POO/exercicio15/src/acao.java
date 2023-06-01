public class acao {
  public static int ANDANDO = 1;
  public static int VOANDO = 2;
  public static int NADANDO = 3;
  public static int TELETRANSPORTANDO = 4;

  public void movimentando(int acao) {
    if (acao == 1) {
      System.out.println("andando");
    }
    if (acao == 2) {
      System.out.println("voando");
    }
    if (acao == 3) {
      System.out.println("nadando");
    }
    if (acao == 4) {
      System.out.println("teletransportando");
    }
  }
}
