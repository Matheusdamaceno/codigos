class poke {
    String nome;
    int vida, atk, def;

    void apresentar() {
        System.out.println("Nome do pokemon: " + nome);
        System.out.println("\nAtaque: " + atk);
        System.out.println("\nDefesa: " + def);
        System.out.println("\nVida: " + vida);
    }
}

class treinador {
    String nome;
    int idade;
    poke x = new poke();

    void apresentar() {
        System.out.println("Nome do treinador: " + nome);
        System.out.println("\nIdade: " + idade);
        System.out.println("\nPokemon: " + x.nome);
    }
}

public class pokemon {
    public static void main(String[] args) throws Exception {
        treinador tre = new treinador();
        poke y = new poke();
        y.nome = "charmander";
        y.vida = 100;
        y.atk = 2;
        y.def = 3;
        y.apresentar();
        tre.nome = "Oak";
        tre.idade = 28;
        tre.x.nome = y.nome;
        tre.apresentar();
    }
}
