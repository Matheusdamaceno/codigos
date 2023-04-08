import java.util.Scanner;

public class telaFuncionario {
  Scanner sc = new Scanner(System.in);

  void lerDados(funcionario f) {
    System.out.println("Digite o nome do funcionario: ");
    f.setNome(sc.nextLine());
    System.out.println("Digite o endereco do funcionario");
    f.setEnd(sc.nextLine());
    System.out.println("Digite o salario do funcionario: ");
    f.setSalario(sc.nextFloat());
  }

  void apresentar(funcionario f) {
    System.out.println("Nome: " + f.getNome());
    System.out.println("Endereco: " + f.getEnd());
    System.out.println("Salario: " + f.getSalario());
  }
}
