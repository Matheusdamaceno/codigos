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
    JButton botaoap = (JButton) e.getSource();
    String opc = botaoap.getName();

    switch (opc) {
      case "lancar":
        System.out.println("VAI TOMA");
        break;
      case "nsei":
        System.out.println("NO CU PIRANHA");
        break;
      default:
        break;
    }
  }
}
