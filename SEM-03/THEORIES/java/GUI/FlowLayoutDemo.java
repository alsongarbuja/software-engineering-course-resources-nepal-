import java.awt.*;

class FlowLayoutDemo
{
	FlowLayoutDemo()
	{
		Frame f = new Frame("Flow Layout");

			f.setVisible(true);
			f.setSize(400, 400);

		Button one = new Button("one");
		Button two = new Button("two");
		Button three = new Button("three");
		Button four = new Button("four");

		f.add(one);f.add(two);f.add(three);f.add(four);

			f.setLayout(new FlowLayout(FlowLayout.RIGHT, 20, 30)); // aligning the buttons to right with hspace 20 and vspace 30
	}

	public static void main(String[] args) 
	{
		new FlowLayoutDemo();	
	}
}