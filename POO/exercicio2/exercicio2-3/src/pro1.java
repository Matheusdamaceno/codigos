class digimon {
    int hp;
    int atk;
    int def;
    String nome;

    void apresentar() {
        System.out.println("Vida: " + hp + "\nAtaque: " + atk + "\nDefesa: " + def + "\nNome: " + nome);
    }
}

class treinador {
    String nome;
    int idade;
    String cidade;

    void apresentar() {
        System.out.println("Nome: " + nome + "\nIdade: " + idade + "\nCidade: " + cidade);
    }
}

public class pro1 {
    public static void main(String[] args) throws Exception {
        digimon x = new digimon();
        digimon y = new digimon();
        treinador t = new treinador();
        x.hp = 5;
        x.atk = 3;
        x.def = 2;
        x.nome = "charmander";
        x.apresentar();
        System.out.println("\n");
        y.hp = 10;
        y.atk = 6;
        y.def = 4;
        y.nome = "squirtle";
        y.apresentar();
        System.out.println("\n");
        t.nome = "Oak";
        t.idade = 28;
        t.cidade = "cornelio";
        t.apresentar();
    }
}
