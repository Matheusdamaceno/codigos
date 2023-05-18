import java.util.Scanner;

// Classe final não pode ter filhos
public final class telaGerente {
  Scanner sc = new Scanner(System.in);
  gerente[] g = new gerente[5];
  int count = 0;

  // Metodo final para não ser sobrescrito
  public final void setGerente(gerente g[]) {
    g[count] = new gerente();
    System.out.println("Digite o nome do gerente: ");
    g[count].setNome(sc.nextLine());
    System.out.println("Digite o salario do gerente: ");
    g[count].setSalario(sc.nextFloat());
    sc.nextLine();
    System.out.println("Digite o departamento do gerente: ");
    g[count].setDepart(sc.nextLine());
  }

  // Metodo final para não ser sobrescrito
  public final void apresentar(gerente g[], int pos) {
    System.out.println("Nome: " + g[pos].getNome());
    System.out.println("Salario: " + g[pos].getSalario());
    System.out.println("Departamento: " + g[pos].getDepart());
  }

  public int tGeren() {
    int op;
    System.out.println("1 - Criar gerente");
    System.out.println("2 - Apresentar gerente");
    System.out.println("3 - Listar todos gerentes cadastrados");
    System.out.println("0 - Voltar");
    op = sc.nextInt();
    sc.nextLine();
    return op;
  }

  public void criarGerente() {
    if (count >= g.length) {
      System.out.println("Banco de dados lotado!");
    } else {
      setGerente(g);
    }
  }

  public void listar() {
    int pos = 0;
    System.out.println("Digite a posição do gerente: ");
    pos = sc.nextInt();
    sc.nextLine();
    if (g[pos] != null) {
      apresentar(g, pos);
    } else {
      System.out.println("Vazio!!");
    }
  }

  public void listarTodos() {
    for (int i = 0; i < g.length; i++) {
      if (g[i] != null)
        apresentar(g, i);
    }
  }
}
