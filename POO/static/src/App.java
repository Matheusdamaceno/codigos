public class App {
    public static void main(String[] args) throws Exception {
        pessoa p1 = new pessoa();
        pessoa p2 = new pessoa();
        pessoa p3 = new pessoa();
        pessoa.fazAlgo();

        // atributos não-estaticos
        p1.nome = "Migal";
        p2.nome = "frodo";
        p3.nome = "vanessa";

        System.out.println(p1.nome);
        System.out.println(p2.nome);
        System.out.println(p3.nome);

        // p1.cont += 1;
        // p2.cont += 1;
        // p3.cont += 1;

        // System.out.println(p1.cont);
        // System.out.println(p2.cont);
        // System.out.println(p3.cont);

        // System.out.println("quantos objetos foram instanciados?" + pessoa.cont);

        // atributos estaticos (compartilhados entre todos os objetos) caso 2
        System.out.println(cor.VERMELHO);

        cor c = new cor();
        c.pintar(cor.AMARELO);
    }
}
