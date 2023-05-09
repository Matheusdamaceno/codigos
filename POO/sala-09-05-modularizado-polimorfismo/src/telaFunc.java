
import java.util.Scanner;

public class telaFunc {
  Scanner sc = new Scanner(System.in);

  void lerDados(funcionario f) {
    System.out.println("---------------------------------------------------");
    System.out.println("Digite o nome do funcionario: ");
    f.setNome(sc.nextLine());
    System.out.println("Digite o endereço do funcionario: ");
    f.setEnd(sc.nextLine());
    System.out.println("Digite o salario: ");
    f.setSalario(sc.nextFloat());
  }

  void apresentar(funcionario f) {
    System.out.println("---------------------------------------------------");
    System.out.println("Nome: " + f.getNome());
    System.out.println("Endereco: " + f.getEnd());
    System.out.println("Salario: " + f.getSalario());
  }
}
