public class cliente implements contratoCRUD {
  private String nome;
  private int cpf;

  public String getNome() {
    return this.nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public int getCpf() {
    return this.cpf;
  }

  public void setCpf(int cpf) {
    this.cpf = cpf;
  }

  // ----------------------
  @Override
  public void cadastrar() {

  }

  public void excluir() {

  }

  public void carregar() {

  }

  public void carregarLista() {

  }
  // -------------------------

}
