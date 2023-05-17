import java.util.InputMismatchException;
import java.util.Scanner;

public class gerenciador {
  Scanner sc = new Scanner(System.in);

  public void fazalgo() {
    try {
      int a, b;

      System.out.println("digite um numero: ");
      a = sc.nextInt();
      System.out.println("digite um outro numero: ");
      b = sc.nextInt();
      System.out.println(a / b);
    } catch (InputMismatchException ex) {
      System.out.println("digite um inteiro");
      ex.printStackTrace();
    } catch (ArithmeticException ae) {
      System.out.println("Divisao por zero fi se liga");
    }
  }
}
