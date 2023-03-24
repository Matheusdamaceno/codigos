class produto {
    String nome;
    float preco;

    void apresentar() {
        System.out.println("Nome do produto: " + nome + "\nPreço do produto: R$" + preco);
    }
}

public class sistema {
    public static void main(String[] args) throws Exception {
        produto x = new produto();
        x.nome = "Computador";
        x.preco = 5000;
        x.apresentar();
    }
}
