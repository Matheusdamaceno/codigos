class digimon {
    int hp;
    int atk;
    int def;
    String nome;

    void apresentar() {
        System.out.println("Vida: " + hp + "\nAtaque: " + atk + "\nDefesa: " + def + "\nNome: " + nome);
    }
}

public class pro1 {
    public static void main(String[] args) throws Exception {
        digimon x = new digimon();
        x.hp = 5;
        x.atk = 3;
        x.def = 2;
        x.nome = "charmander";
        x.apresentar();
    }
}
