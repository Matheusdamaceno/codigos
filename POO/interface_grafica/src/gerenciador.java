import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

// import javax.swing.JButton;

public class gerenciador implements ActionListener {
  private TelaPrincipal tp;

  public gerenciador() {
    tp = new TelaPrincipal();
    // o botao é um referencia ao botao da tela
    // JButton botao = tp.jbtFazAlgo;
    // botao.addActionListener(this);

    // JButton botao2 = tp.jbt;
    // botao2.addActionListener(this);
    tp.addAction(this);
  }

  public void actionPerformed(ActionEvent e) {
    System.out.println("VAI TOMA NO CU PIRANHA");
    JButton botaoap = (JButton) e.getSource();
    if (botaoap.getText().equals("cancelar")) {

    }
  }
}
