
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

/**
 *
 * @author Matheus
 */
public class TelaPrincipal extends JFrame {
    private JLabel jlbNome;
    private JTextField jtfNome;
    private JButton jbtFazAlgo;
    private JButton jbt;
    private JLabel jlbCod;
    private JTextField jtfCod;
    private JLabel jlbEnd;
    private JTextField jtfEnd;

    public void setCliente(cliente c) {
        jtfNome.setText(c.getNome());
        jtfCod.setText(String.valueOf(c.getCod()));
        jtfEnd.setText(c.getEnd());
    }

    public cliente getCliente() {
        cliente c = new cliente();
        c.setNome(jtfNome.getText());
        c.setCod(Integer.parseInt(jtfCod.getText()));
        c.setEnd(jtfEnd.getText());
        return c;
    }

    public int getCod() {
        return Integer.parseInt(jtfCod.getText());
    }

    public TelaPrincipal() {
        this.setTitle("Finalmente! Mas faltei!");
        this.setLayout(null);
        // this.setExtendedState(JFrame.MAXIMIZED_BOTH);
        this.setSize(500, 500);
        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        // instanciar e configurando o rotulo
        jlbNome = new JLabel();
        jlbNome.setText("Nome: ");
        jlbNome.setBounds(50, 100, 50, 20);

        // instanciar e configurando o textfield
        jtfNome = new JTextField();
        jtfNome.setBounds(100, 100, 200, 20);

        jlbCod = new JLabel();
        jlbCod.setText("Codigo: ");
        jlbCod.setBounds(50, 150, 50, 20);

        jtfCod = new JTextField();
        jtfCod.setBounds(100, 150, 200, 20);

        jlbEnd = new JLabel();
        jlbEnd.setText("Endereço: ");
        jlbEnd.setBounds(50, 200, 200, 20);

        jtfEnd = new JTextField();
        jtfEnd.setBounds(100, 200, 200, 20);

        // instanciar e configurando o botao
        jbtFazAlgo = new JButton();
        jbtFazAlgo.setText("lancarrr");
        jbtFazAlgo.setBounds(300, 350, 150, 30);
        jbtFazAlgo.setName("lancar");

        jbt = new JButton();
        jbt.setText("cadastrar");
        jbt.setBounds(100, 350, 150, 30);
        jbt.setName("nsei");
        // adicionar cada componente ao jframe
        this.add(jlbNome);
        this.add(jtfNome);
        this.add(jbtFazAlgo);
        this.add(jbt);
        this.add(jlbCod);
        this.add(jlbEnd);
        this.add(jtfCod);
        this.add(jtfEnd);

        // apresentar na tela
        this.setVisible(true);
    }

    public void addAction(gerenciador g) {
        // o botao é um referencia ao botao da tela
        jbtFazAlgo.addActionListener(g);
        jbt.addActionListener(g);
    }
}
