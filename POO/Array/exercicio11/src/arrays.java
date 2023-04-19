import java.util.Scanner;

public class arrays {

    public static void main(String[] args) throws Exception {
        int[] a = new int[5];

        a[0] = 20;
        a[1] = 30;

        // a[5] = 50; da erro de execução
      //  System.out.println(a[5]); // por padrao a variavel é 0 caso não intanciada

        // cria um vetor de clientes
        // mas o veto n possui, ainda
        cliente[] vetc = new cliente[5];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            vetc[i] = new cliente();
            System.out.println("Digite um nome: ");
            vetc[i].setNome(sc.nextLine());
            System.out.println("Digite o ende: ");
            vetc[i].setEndereco(sc.nextLine());
            System.out.println("Digite o codigo: ");
            vetc[i].setCod(sc.nextInt());
            sc.nextLine();
        }
        for (int i = 0; i < 5; i++) {
            System.out.println("Nome: " + vetc[i].getNome());
            System.out.println("Endereço: " + vetc[i].getEndereco());
            System.out.println("Codigo: " + vetc[i].getCod());
        }
        sc.close();
    }
}
