
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class TelaPrincipal extends JFrame {
  JButton jbtCadastro = new JButton();
  JButton jbtapresenta = new JButton();

  public TelaPrincipal() {
    this.setTitle("Pokemon");
    this.setLayout(null);
    this.setSize(500, 500);
    this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

    JLabel jlvida = new JLabel();
    JLabel jlnome = new JLabel();
    JLabel jlatk = new JLabel();
    JLabel jldef = new JLabel();

    jlnome.setText("Nome: ");
    jlnome.setBounds(50, 100, 50, 20);

    jlvida.setText("Vida: ");
    jlvida.setBounds(50, 150, 50, 20);

    jlatk.setText("Ataque: ");
    jlatk.setBounds(50, 200, 50, 20);

    jldef.setText("Defesa: ");
    jldef.setBounds(50, 250, 50, 20);

    JTextField jtfnome = new JTextField();
    JTextField jtfVida = new JTextField();
    JTextField jtfAtaque = new JTextField();
    JTextField jtfDef = new JTextField();

    jtfnome.setBounds(110, 100, 200, 20);
    jtfVida.setBounds(110, 150, 200, 20);
    jtfAtaque.setBounds(110, 200, 200, 20);
    jtfDef.setBounds(110, 250, 200, 20);

    jbtCadastro.setText("cadastrar");
    jbtCadastro.setBounds(150, 350, 150, 30);

    jbtapresenta.setText("apresentar");
    jbtapresenta.setBounds(300, 350, 150, 30);

    this.add(jlnome);
    this.add(jlvida);
    this.add(jlatk);
    this.add(jldef);
    this.add(jtfnome);
    this.add(jtfVida);
    this.add(jtfAtaque);
    this.add(jtfDef);
    this.add(jbtCadastro);
    this.add(jbtapresenta);

    this.setVisible(true);
  }

  public void addAction(gerenciador g) {
    // o botao é um referencia ao botao da tela
    jbtCadastro.addActionListener(g);
    jbtapresenta.addActionListener(g);
  }
}