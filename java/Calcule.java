import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.awt.GraphicsConfiguration;
import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.Container;
import java.awt.GridLayout;
import java.awt.Toolkit;
class Calcule{
    static GraphicsConfiguration gc;

	public static void main(String args[]){
        JFrame frame = new JFrame("EXO Machine ");
        Container content1 = frame.getContentPane();
        Container content2 = frame.getContentPane();
        Container content3 = frame.getContentPane();

        content1.setLayout(new GridLayout(3,2));
        content1.setLayout(new GridLayout(3,2));
        content3.setLayout(new GridLayout(3,2));

        JTextField Vnombre1 , Vnombre2, Rnombre3;
        JButton Addition,Soustraction,Division,Multiplication,Modulo,Fermer;
        JLabel Valeur1, Valeur2, Resultat;


        // Created  New Object JLabel
        Valeur1 = new JLabel();
        Valeur2 = new JLabel();
        Resultat = new JLabel();

        // Initialization Size of JLabel
        Valeur1.setText("Valeur 1 :");
        Valeur1.setBounds(150,10,100,30);
        Valeur2.setText("Valeur 2 :");
        Valeur2.setBounds(150,30,100,30);
        Resultat.setText("Resultat : ");
        Resultat.setBounds(150,50,100,30);

        Vnombre1 = new JTextField();
        Vnombre2 = new JTextField();
        Rnombre3 = new JTextField();

        Vnombre1.setBounds(150,10,100,30);
        Vnombre2.setBounds(150,30,100,30);
        Rnombre3.setBounds(150,50,100,30);



        // Created  New Object JButton
        Addition = new JButton("Addition");
        Soustraction = new JButton("Soustraction");
        Multiplication = new JButton("Multiplication");
        Modulo = new JButton("Modulo");
        Division = new JButton("Division");
        Fermer = new JButton("Fermer");

        // Initialization Size For All Button
        Addition.setBounds(150, 300, 100,30);
        Soustraction.setBounds(250, 300, 100, 30);
        Multiplication.setBounds(350, 300, 100, 30);
        Modulo.setBounds(150,400,100,30);
        Division.setBounds(250,400,100,30);
        Fermer.setBounds(350,400,30,30);
        // End of Initilization
        //Event for all Button



        // Add of Jlabel to Main Frame
        content1.add(Valeur1);
        content1.add(Valeur2);
        content1.add(Resultat);


        content3.add(Vnombre1);
        content3.add(Vnombre2);
        content3.add(Rnombre3);

        // Add of Button to Main Frame
        content2.add(Addition);
        content2.add(Soustraction);
        content2.add(Multiplication);
        content2.add(Modulo);
        content2.add(Division);
        content2.add(Fermer);
        // End of Button Add to Main Frame
        frame.setSize(1280, 150);
        frame.setResizable(false);
        frame.setVisible(true);
        //frame.setLayout();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Addition.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double valeur1 = Double.parseDouble(Vnombre2.getText());
                double valeur2 = Double.parseDouble(Rnombre3.getText());
                Vnombre1.setText(String.valueOf((valeur1 + valeur2)));

            }
        });
        Multiplication.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double valeur1 = Double.parseDouble(Vnombre2.getText());
                double valeur2 = Double.parseDouble(Rnombre3.getText());
                Vnombre1.setText(String.valueOf((valeur1 * valeur2)));

            }
        });
        Soustraction.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double valeur1 = Double.parseDouble(Vnombre2.getText());
                double valeur2 = Double.parseDouble(Rnombre3.getText());
                Vnombre1.setText(String.valueOf((valeur1 - valeur2)));

            }
        });
        Modulo.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double valeur1 = Double.parseDouble(Vnombre2.getText());
                double valeur2 = Double.parseDouble(Rnombre3.getText());
                Vnombre1.setText(String.valueOf((valeur1 % valeur2)));

            }
        });
        Division.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                
                double valeur1 = Double.parseDouble(Vnombre2.getText());
                double valeur2 = Double.parseDouble(Rnombre3.getText());
                Vnombre1.setText(String.valueOf((valeur1 / valeur2)));


            }
        });
        Fermer.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);

            }
        });



    }
}
