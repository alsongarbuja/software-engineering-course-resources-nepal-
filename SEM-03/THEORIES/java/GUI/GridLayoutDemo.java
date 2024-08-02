import java.awt.*;

class GridLayoutDemo
{
	GridLayoutDemo()
	{
		Frame f = new Frame("Grid Layout");

			f.setVisible(true);
			f.setSize(400, 400);

		Button one = new Button("1");
		Button two = new Button("2");
		Button three = new Button("3");
		Button four = new Button("4");

		f.add(one);f.add(two);f.add(three);f.add(four);

			f.setLayout(new GridLayout(2,2)); // 2 rows and 2 columns
	}

	public static void main(String[] args) 
	{
		new GridLayoutDemo();	
	}
}