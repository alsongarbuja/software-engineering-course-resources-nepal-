import java.awt.*;
import java.awt.event.*;

class ActionListenerDemo implements ActionListener
{
	TextField tf;
	ActionListenerDemo()
	{
		Frame f = new Frame();

			f.setSize(300, 300);
			f.setVisible(true);
			f.setLayout(null);

		Button btn = new Button("Click me");
		btn.setBounds(100,120,80,30);
		btn.addActionListener(this);
		
		tf = new TextField("");
		tf.setBounds(60,50,170,20);

		f.add(tf);
		f.add(btn);

	}

	public void actionPerformed(ActionEvent e)
	{  
		tf.setText("ActionListener Demo");  
	}  

	public static void main(String[] args) 
	{
		new ActionListenerDemo();
	}
}