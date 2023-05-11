public class digimon extends monstro implements monstroLut {
  private String estagio;

  public String getEstagio() {
    return this.estagio;
  }

  public void setEstagio(String estagio) {
    this.estagio = estagio;
  }

  @Override
  public void mover() {
    System.out.println("digimon movendo");
  }

  @Override
  public void fugir() {
    System.out.println("digimon fugindo");
  }

  @Override
  public void atacar() {
    System.out.println("digimon atacando");
  }

}
