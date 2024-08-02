import javax.swing.*;
import java.awt.event.*;

public class SumAndDiffDemo implements ActionListener {
    
    JTextField tf1, tf2, tf3;
    JButton addBtn, subBtn;

    SumAndDiffDemo(){
        JFrame f = new JFrame();

            f.setSize(1000, 1000);
            f.setVisible(true);

        tf1 = new JTextField("10");
        tf2 = new JTextField("5");
        tf3 = new JTextField("");
        tf1.setBounds(50, 50, 100, 30);
        tf2.setBounds(50, 100, 100, 30);
        tf3.setBounds(50, 150, 100, 30);

        addBtn = new JButton("Add");
        subBtn = new JButton("Sub");
        addBtn.setBounds(50, 200, 50, 20);
        subBtn.setBounds(50, 250, 50, 20);

        addBtn.addActionListener(this);
        subBtn.addActionListener(this);

        f.add(tf1);
        f.add(tf2);
        f.add(tf3);
        f.add(addBtn);
        f.add(subBtn);
    }

    @Override
    public void actionPerformed(ActionEvent e){
        
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        int result;

        if(e.getSource()==addBtn){
            result = num1+num2;
            tf3.setText("The sum is "+ String.valueOf(result));
        }else{
            result = num1-num2;
            tf3.setText("The difference is "+ String.valueOf(result));
        }
            
    }

    public static void main(String[] args) {
        new SumAndDiffDemo();
    }
}
