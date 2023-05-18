import java.util.ArrayList;
import java.util.Scanner;

public class telaVendedor {
  Scanner sc = new Scanner(System.in);
  private ArrayList<vendedor> v = new ArrayList<vendedor>();
  int count = 0;

  public void setVendedor(vendedor v) {
    System.out.println("Digite o nome do vendedor: ");
    v.setNome(sc.nextLine());
    System.out.println("Digite o salario do vendedor: ");
    v.setSalario(sc.nextFloat());
    sc.nextLine();
    System.out.println("Digite o percentual do vendedor: ");
    v.setPercentual(sc.nextFloat());
    sc.nextLine();
  }

  public void apresentar(vendedor v) {
    System.out.println("Nome: " + v.getNome());
    System.out.println("Salario: " + v.getSalario());
    System.out.println("Percentual: " + v.getPercentual());
  }

  public int tVend() {
    int op;
    System.out.println("1 - Criar Vendedor");
    System.out.println("2 - Apresentar vendedor");
    System.out.println("3 - Listar vendedores cadastrados");
    System.out.println("0 - Voltar");
    op = sc.nextInt();
    sc.nextLine();
    return op;
  }

  public void criarVendedor() {
    v.add(new vendedor());
    setVendedor(v.get(v.size() - 1));
  }

  public void listar() {
    int pos = 0;
    System.out.println("Digite a posição do vendedor: ");
    pos = sc.nextInt();
    sc.nextLine();
    if (v.get(pos) != null) {
      apresentar(v.get(pos));
    } else {
      System.out.println("Vazio!");
    }
  }

  public void listarTodos() {
    for (int i = 0; i < v.size(); i++) {
      if (v.get(i) != null)
        apresentar(v.get(i));
    }
  }
}
