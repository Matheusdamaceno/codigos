
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
        jtfNome.setBounds(110, 100, 200, 20);

        // instanciar e configurando o botao
        jbtFazAlgo = new JButton();
        jbtFazAlgo.setText("lancarrr");
        jbtFazAlgo.setBounds(300, 350, 150, 30);
        jbtFazAlgo.setName("lancar");

        jbt = new JButton();
        jbt.setText("Faz algo");
        jbt.setBounds(100, 350, 150, 30);
        jbt.setName("nsei");
        // adicionar cada componente ao jframe
        this.add(jlbNome);
        this.add(jtfNome);
        this.add(jbtFazAlgo);
        this.add(jbt);

        // apresentar na tela
        this.setVisible(true);
    }

    public void addAction(gerenciador g) {
        // o botao é um referencia ao botao da tela
        jbtFazAlgo.addActionListener(g);
        jbt.addActionListener(g);
    }
}
