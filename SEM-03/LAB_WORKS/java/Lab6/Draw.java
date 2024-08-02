import java.applet.Applet;
import java.awt.*;

public class Draw extends Applet
{
	public void init()
	{
		setSize(1000, 1000);
	}

	public void paint(Graphics g)
	{
		g.setColor(Color.red);

		g.drawRect(10, 100, 400, 200); // to draw rectangle (x-cor, y-cor, width, height)
		g.drawOval(10, 350, 50, 50); // to draw oval (x-cor, y-cor, radius, height)
		g.drawLine(500, 500, 500, 300); // to draw line ()
	}
}