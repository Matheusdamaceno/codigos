import java.util.ArrayList;

public class gerenciador {
  void exe() {
    ArrayList<cliente> cli = new ArrayList<cliente>();
    TelaCliente tc = new TelaCliente();

    for (int i = 0; i < 10; i++) {
      cli.add(new cliente());
      tc.setCLiente(cli.get(i));
    }

    for (int i = 0; i < cli.size(); i++) {
      tc.apresentar(cli.get(i));
    }
  }
}
