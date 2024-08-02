// import java.awt.event.ActionEvent;
// import java.awt.event.ActionListener;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
// import java.awt.Color;

public class UpperCaseDemo implements ActionListener {
	
	JTextField tf;
	
	UpperCaseDemo(){
		JFrame f = new JFrame();
		f.setSize(800, 800);
		f.setVisible(true);
		
		JButton btn = new JButton("Action");
		tf = new JTextField("Hello World");
		
		tf.setBounds(100, 50, 60, 20);
		btn.setBounds(100, 100, 30, 40);
		
		btn.addActionListener(this);
		
		f.add(tf);
		f.add(btn);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		String str = tf.getText().toUpperCase(); // Makes the text inside the textfield to UpperCase
		tf.setText(str);
		tf.setBackground(Color.BLUE); // Makes the background color of Textfield to Blue.
	}

	public static void main(String[] args) {
		new UpperCaseDemo();
	}
}