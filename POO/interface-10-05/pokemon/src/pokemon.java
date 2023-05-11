public class pokemon extends monstro implements monstroLut {
  private String elemento;

  public String getElemento() {
    return this.elemento;
  }

  public void setElemento(String elemento) {
    this.elemento = elemento;
  }

  @Override
  public void mover() {
    System.out.println("pokemon movendo");
  }

  @Override
  public void fugir() {
    System.out.println("pokemon fugindo");
  }

  @Override
  public void atacar() {
    System.out.println("pokemon atacando");
  }

}
