public class Cliente extends Pessoa {
  protected int cod;

  public int getCod() {
    return this.cod;
  }

  public void setCod(int cod) {
    this.cod = cod;
  }

  public void preparandoTerreno() {
    System.out.println("faz algo importante");
  }

  @Override
  public void cadastrar() {
    preparandoTerreno();
    System.out.println("Cadastrando cliente");
  }

}
