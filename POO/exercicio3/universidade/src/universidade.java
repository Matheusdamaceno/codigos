class Professor {
    String nome;
    float salario;

    void apresentar() {
        System.out.println("Nome do professor: " + nome + "\nSalario: " + salario);
    }
}

class Disciplina {
    String nome;
    Professor p = new Professor();

    void apresentar() {
        System.out.println("Nomeda disciplina: " + nome);
    }
}

class Aluno {
    String nome;
    int ra;
    Disciplina d = new Disciplina();

    void apresentar() {
        System.out.println("Nome do aluno: " + nome + "\nRa: " + ra);
    }
}

public class universidade {
    public static void main(String[] args) throws Exception {
        Professor p1 = new Professor();
        Disciplina d1 = new Disciplina();
        Aluno a1 = new Aluno();

        p1.nome = "Nardi";
        p1.salario = 10000;
        p1.apresentar();
        d1.nome = "programacao";
        d1.p.nome = p1.nome;
        d1.apresentar();
        a1.nome = "matheus";
        a1.ra = 2475510;
        a1.d.nome = d1.nome;
        a1.apresentar();

    }
}
