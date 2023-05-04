public class Funcionario extends Pessoa {
  private float sal;

  public float getSal() {
    return this.sal;
  }

  public void setSal(float sal) {
    this.sal = sal;
  }

  @Override
  public void cadastrar() {
    System.out.println("Cadastrando funcionario");
  }
}
