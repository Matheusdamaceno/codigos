public class pessoa {
  public String nome;
  public String end;
  public int idade;
  public static int cont = 0;

  public pessoa() {
    cont += 1;
  }

  public static void fazAlgo() {
    System.out.println("sou metodo statico");
  }
}
