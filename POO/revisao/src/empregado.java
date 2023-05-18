// usando classe abstrata para ela não ser instanciada
public abstract class empregado {
  private String nome;
  private float salario;

  public String getNome() {
    return this.nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public float getSalario() {
    return this.salario;
  }

  public void setSalario(float salario) {
    this.salario = salario;
  }

}
