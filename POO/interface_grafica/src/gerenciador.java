import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

// import javax.swing.JButton;

public class gerenciador implements ActionListener {
  private TelaPrincipal tp;
  private cliente c;

  public gerenciador() {
    tp = new TelaPrincipal();
    c = new cliente();
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
        c.setNome("Dumbledore");
        c.setCod(1);
        c.setEnd("Rua n sei");
        tp.setCliente(c);
        break;
      case "nsei":
        System.out.println("NO CU PIRANHA");
        tp.getCliente(c);
        System.out.println(c.getNome());
        System.out.println(c.getCod());
        System.out.println(c.getEnd());
        break;
      default:
        break;
    }
  }
}
