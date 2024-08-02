import java.awt.*;

class HouseDemo extends Canvas
{
	public void paint(Graphics g)
	{
		// background color for sky
		g.setColor(Color.BLUE);
		g.fillRect(0,0, 800, 400);

		// ovals for cloud
		g.setColor(Color.WHITE);
		// g.drawOval(600, 20, 50, 50);
		g.fillOval(600, 30, 90, 90);
		g.fillOval(660, 20, 60, 60);
		g.fillOval(660, 60, 70, 60);
		g.fillOval(700, 30, 70, 70);


		g.setColor(Color.BLACK);
		// corodinates for the house outer body
		int x[] = {315, 80, 550, 120, 120, 250, 250, 350, 350, 500, 500, 550, 315};
		int y[] = {50, 300, 300, 300, 600, 600, 450, 450, 600, 600, 300, 300, 50};

			// outer body of the house
			// g.drawPolygon(x, y, 13);
			g.setColor(Color.RED);
			g.fillPolygon(x, y, 13);

			g.setColor(new Color(155, 105, 35));
			g.fillPolygon(x, y, 3);

			// windows of the house
			g.setColor(Color.GRAY);
			// g.drawRect(150, 350 , 70, 70);
			// g.drawRect(390, 350, 70, 70);
			g.fillRect(150, 350 , 70, 70);
			g.fillRect(390, 350, 70, 70);

			// door of the house
			g.fillRect(250, 450, 100, 150);

	}

	public static void main(String[] args) 
	{
		HouseDemo h = new HouseDemo();
		Frame f = new Frame();

			f.setSize(800, 800);
			f.setVisible(true);
			f.setBackground(Color.GREEN);
			f.add(h);
	}
}