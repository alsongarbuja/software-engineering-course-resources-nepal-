import java.applet.Applet;
import java.awt.*;

public class AppletLifeCycle extends Applet
{
	public void init()
	{
		System.out.println("Initialized");
	}
	public void start()
	{
		System.out.println("Starting applet");
	}
	public void paint(Graphics g)
	{
		g.drawString("Hello Mister!!", 50 , 50);
	}
	public void stop()
	{
		System.out.println("Stopping applet");
	}
	public void destroy()
	{
		System.out.println("Destroyed");
	}
}