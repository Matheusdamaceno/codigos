class produto {
    String nome;
    float preco;

    void apresentar() {
        System.out.println("Nome do produto: " + nome + "\nPreço do produto: R$" + preco);
    }
}

class cliente {
    String nome;
    String end;

    void apresentar() {
        System.out.println("Nome do cliente: " + nome + "\nEndereço: " + end);
    }
}

public class sistema {
    public static void main(String[] args) throws Exception {
        produto x = new produto();
        cliente y = new cliente();
        x.nome = "Computador";
        x.preco = 5000;
        x.apresentar();
        System.out.println("");
        y.nome = "Claudio";
        y.end = "rua das palmeiras";
        y.apresentar();

    }
}
