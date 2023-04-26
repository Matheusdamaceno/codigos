import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        // declarando e instanciando um arraylist
        ArrayList<pokemon> lista = new ArrayList<pokemon>();

        // Adicionando elementos ao arraylist
        lista.add(new pokemon());
        lista.add(new pokemon());

        // Lendo elementos
        pokemon x = lista.get(0);
        x.setNome("pikachu");
        x.setVida(10);

        lista.get(1).setNome("charmander");
        lista.get(1).setVida(5);
    }
}
