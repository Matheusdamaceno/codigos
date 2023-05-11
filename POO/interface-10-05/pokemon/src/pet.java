public class pet extends monstro {

  private String relacao;

  public String getRelacao() {
    return this.relacao;
  }

  public void setRelacao(String relacao) {
    this.relacao = relacao;
  }

  @Override
  public void mover() {
    System.out.println("pet movendo");
  }

  @Override
  public void fugir() {
    System.out.println("pet fugindo");
  }

}
