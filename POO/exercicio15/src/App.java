public class App {
    public static void main(String[] args) throws Exception {
        heroi h = new heroi();
        heroi h2 = new heroi();
        h.mover(acao.TELETRANSPORTANDO);
        h2.mover(acao.ANDANDO);

        heroi.ContHeroi();
    }
}
