public class App {
    public static void main(String[] args) throws Exception {
        produto prod = new produto();
        TelaProduto tp = new TelaProduto();

        tp.ler(prod);
        tp.apresentar(prod);
    }
}
