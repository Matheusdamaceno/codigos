import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class gerenciador implements ActionListener {
  private TelaPrincipal tp;

  public gerenciador() {
    tp = new TelaPrincipal();

    tp.addAction(this);
  }

  public void actionPerformed(ActionEvent e) {
    System.out.println(
        "vou aprender a pegar os dados do pokemon da tela para o objeto pokemon e vice-versa na pr\u00F3xima aula!");
  }
}
