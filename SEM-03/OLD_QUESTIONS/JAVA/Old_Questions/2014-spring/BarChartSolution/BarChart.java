import java.applet.*;
import java.awt.Color;
import java.awt.Graphics;

public class BarChart extends Applet{

    public void init(){
        setSize(1000, 1000);
    }
    
    public void paint(Graphics g){
        g.setColor(Color.BLACK);
        g.fillRect(50, 50, 30, 100);

        g.setColor(Color.BLUE);
        g.fillRect(150, 110, 30, 40);

        g.setColor(Color.GREEN);
        g.fillRect(250, 70, 30, 80);

        g.setColor(Color.RED);
        g.drawString("Java", 50, 160);
        g.drawString("C", 150, 160);
        g.drawString("C++", 250, 160);
    }

}