import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class App {
    public static void main(String[] args) throws Exception {
        JFrame tela = new JFrame();

        tela.setTitle("Fiz sozinho!!");
        tela.setLayout(null);
        tela.setSize(500, 500);
        tela.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        JLabel jlcod = new JLabel();
        JLabel jlnome = new JLabel();
        JLabel jlend = new JLabel();

        jlcod.setText("Codigo: ");
        jlcod.setBounds(50, 100, 50, 20);

        jlnome.setText("Nome: ");
        jlnome.setBounds(50, 150, 50, 20);

        jlend.setText("Endereço: ");
        jlend.setBounds(50, 200, 50, 20);

        JTextField jtfCod = new JTextField();
        JTextField jtfnome = new JTextField();
        JTextField jtfend = new JTextField();

        jtfCod.setBounds(110, 100, 200, 20);
        jtfnome.setBounds(110, 150, 200, 20);
        jtfend.setBounds(110, 200, 200, 20);

        JButton jbtFazAlgo = new JButton();

        jbtFazAlgo.setText("cadastrar");
        jbtFazAlgo.setBounds(300, 350, 150, 30);

        tela.add(jlcod);
        tela.add(jlnome);
        tela.add(jlend);
        tela.add(jtfCod);
        tela.add(jtfnome);
        tela.add(jtfend);
        tela.add(jbtFazAlgo);

        tela.setVisible(true);
    }
}
