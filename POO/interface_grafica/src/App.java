import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class App {
    public static void main(String[] args) throws Exception {
        // instanciar a janela (jframe)
        JFrame tela = new JFrame();

        // configurar a janela
        tela.setTitle("Finalmente! Mas faltei!");
        tela.setLayout(null);
        // tela.setExtendedState(JFrame.MAXIMIZED_BOTH);
        tela.setSize(500, 500);
        tela.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        // instanciar o rotulo (jlabel)
        JLabel jlbNome = new JLabel();

        // configurar o jlabel
        jlbNome.setText("Nome: ");
        jlbNome.setBounds(50, 100, 50, 20);

        // instanciar o campo (JTextField)
        JTextField jtfNome = new JTextField();

        // configurar o campor (JTextField)
        jtfNome.setBounds(110, 100, 200, 20);

        // instanciar o botão(jbuttom)
        JButton jbtFazAlgo = new JButton();

        // configurar o botao
        jbtFazAlgo.setText("lancarrr");
        jbtFazAlgo.setBounds(300, 350, 150, 30);

        // adicionar cada componente ao jframe
        tela.add(jlbNome);
        tela.add(jtfNome);
        tela.add(jbtFazAlgo);

        // apresentar na tela
        tela.setVisible(true);

    }
}
