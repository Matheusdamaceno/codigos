import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        pokemon vetp[] = new pokemon[5];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < vetp.length; i++) {
            vetp[i] = new pokemon();
            System.out.println("Digite o nome do pokemon: ");
            vetp[i].setNome(sc.nextLine());
            System.out.println("Digite o atk: ");
            vetp[i].setAtk(sc.nextInt());
            System.out.println("Digite a def: ");
            vetp[i].setDef(sc.nextInt());
            System.out.println("Digite a vida: ");
            vetp[i].setVida(sc.nextInt());
            sc.nextLine();
        }

        for (int i = 0; i < vetp.length; i++) {
            System.out.println("Nome: " + vetp[i].getNome());
            System.out.println("Atk: " + vetp[i].getAtk());
            System.out.println("Def: " + vetp[i].getDef());
            System.out.println("Vida: " + vetp[i].getVida());
        }
        sc.close();
    }
}
