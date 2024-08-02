import java.applet.Applet;
import java.awt.*;

public class para extends Applet
{
	// para()
	// {
	// 	int a = 5;
	// }
	public void paint(Graphics g)
	{
		String st = getParameter("link");
		g.drawString(st, 40, 40);
	}
}

