import java.util.ArrayList;

// import java.util.Scanner;

public class pokedex {
  private ArrayList<pokemon> lista = new ArrayList<pokemon>();
  private telaPokedex tpx = new telaPokedex();
  private telaPokemon tp = new telaPokemon();

  public void executar() {

    int opc = 0;
    do {
      opc = tpx.menu();
      switch (opc) {
        case 1:// criar novo pokemon
          criarPokemon();
          break;
        case 2:// alterar pokemon
          alterarPokemon();
          break;
        case 3:// apresentar
          apresentar();
          break;
        case 4:// listar
          // chamar o metodo listar
          tp.listar(lista);
          break;
        default:
          System.out.println("invalido");
          break;
      }
    } while (opc != 0);
  }

  // public pokedex() {
  // Scanner sc = new Scanner(System.in);
  // System.out.println("Digite o tamanho do pokedex: ");
  // int tam = sc.nextInt();
  // lista = new pokemon[tam];
  // }
  private void criarPokemon() {
    // checar a posição vazia do vetor
    // se tiver posição vazia, instanciar novo pokemon, pedir para o pokemon ser
    // digitado,atribuir novo pokemon a posição
    // se n tiver posição vazia, indicar q o pokedex esta chei
    // lista.get(pos) = new ArrayList<pokemon>();
    lista.add(new pokemon());
    tp.setPokemon(lista.get(lista.size() - 1));
    tpx.msgListaCheia();

  }

  private void alterarPokemon() {
    // pedir para o usuario, a posição do pokemon
    int pos = tpx.selectPokemon();
    if (lista.get(pos) != null) {
      tp.setPokemon(lista.get(pos));
    } else {
      tpx.msgPokemonNExiste();
    }
    // se a posição estiver sendo ocupada,
    // enviar o pokemon da posição para ser alterado
    // se n
    // dizer q o pokemon n foi criado
  }

  private void apresentar() {
    // pedir para o usuario a posição deu m pokemon
    // se o pokemon existir, mostra ele
    // se n, mensagem de q n foi criado
    int pos = tpx.selectPokemon();
    if (pos < lista.size() && lista.get(pos) != null)
      tp.apresentar(lista.get(pos));
    else
      tpx.msgPokemonNExiste();
  }
}
