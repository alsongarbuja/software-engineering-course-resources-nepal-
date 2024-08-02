import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class AppletSolution extends Applet implements ActionListener{

    TextField tf1, tf2, tf3;

    public void init() {

        setSize(1000, 1000);

        Label lb1 = new Label("Number 1");
        Label lb2 = new Label("Number 2");
        Label lb3 = new Label("Result");

        tf1 = new TextField("");
        tf2 = new TextField("");
        tf3 = new TextField("");

        Button btn = new Button("Sum");

            btn.addActionListener(this);
    
        add(lb1);
        add(tf1);
        add(lb2);
        add(tf2);
        add(lb3);
        add(tf3);
        add(btn);
    }

    @Override
    public void actionPerformed(ActionEvent e){
        
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        int res = num1+num2;

        tf3.setText("The Sum is "+ res);
    }

}