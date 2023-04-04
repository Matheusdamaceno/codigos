import java.util.Scanner;

public class TelaR {
    public void setRemedio(Remedio r) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\nDigite o nome do remedio: ");
        r.setNome(sc.nextLine());
        System.out.println("\nDigite a descricao do remedio: ");
        r.setDs(sc.nextLine());
        System.out.println("\nDigite o preco do remedio: ");
        r.setPreco(sc.nextFloat());
        sc.nextLine();// fflush
        System.out.println("\nDigite a posologia do remedio: ");
        r.setPosologia(sc.nextLine());
        System.out.println("\nDigite o nome tecnico do remedio: ");
        r.setNomeT(sc.nextLine());
        sc.close();
    }

    public void apresentar(Remedio r) {
        System.out.println("\nNome: " + r.getNome());
        System.out.println("\nDescricao: " + r.getDs());
        System.out.println("\nPreco: " + r.getPreco());
        System.out.println("\nPosologia: " + r.getPosologia());
        System.out.println("\nNome Tecnico: " + r.getNomeT());
    }

}
