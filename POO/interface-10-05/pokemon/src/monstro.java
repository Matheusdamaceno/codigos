public abstract class monstro {
  private String nome;

  public String getNome() {
    return this.nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public abstract void mover();

  public abstract void fugir();

}
