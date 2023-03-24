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

class venda {
    float codigo;
    produto p1 = new produto();
    cliente c1 = new cliente();

    void apresentar() {
        System.out.println("Codigo da venda: " + codigo + "\nProduto: " + p1.nome + "\nCliente: " + c1.nome);
    }
}

public class sistema {
    public static void main(String[] args) throws Exception {
        produto x = new produto();
        cliente y = new cliente();
        venda v = new venda();
        x.nome = "Computador";
        x.preco = 5000;
        x.apresentar();
        System.out.println("");
        y.nome = "Claudio";
        y.end = "rua das palmeiras";
        y.apresentar();
        System.out.println("");
        v.codigo = 1;
        v.p1 = x;
        v.c1 = y;
        v.apresentar();
    }
}
