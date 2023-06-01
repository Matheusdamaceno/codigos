public class heroi {
  public String nome;
  public String poder;
  public static int cont = 0;

  public void mover(int acao) {
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

  public heroi() {
    cont += 1;
  }

  public static void ContHeroi() {

    System.out.println("Numero de herois na cidade: " + heroi.cont);
  }
}
