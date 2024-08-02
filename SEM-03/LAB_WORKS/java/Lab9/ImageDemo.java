import java.awt.*;
import javax.swing.*;

class ImageDemo extends Canvas
{

	public void paint(Graphics g)
	{

		Toolkit t=Toolkit.getDefaultToolkit();  
        Image i=t.getImage("Gces_logo.png");  
        g.drawImage(i,20,100,this); 

	}

	public static void main(String[] args) 
	{
		ImageDemo im = new ImageDemo();

		JFrame f = new JFrame();
		f.add(im);
		f.setSize(500, 500);
		f.setVisible(true);	
	}
}