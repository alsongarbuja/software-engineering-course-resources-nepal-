import javax.swing.*;

import java.awt.Color;
import java.awt.event.*;

public class ChangeBG implements ActionListener {
    
    JFrame jf;
    JButton blackBtn, blueBtn;

    ChangeBG(){
        jf = new JFrame();

        jf.setSize(400, 400);
        jf.setVisible(true);

            blackBtn = new JButton("BLACK");
            blueBtn = new JButton("BLUE");

                blackBtn.setBounds(50, 50, 60, 40);
                blueBtn.setBounds(100, 50, 60, 40);

                blackBtn.addActionListener(this);
                blueBtn.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()=="blackbtn"){
            jf.setBackground(Color.BLACK);
        }else{
            jf.setBackground(Color.BLUE);
        }
    }

    public static void main(String[] args) {
        new ChangeBG();
    }

}