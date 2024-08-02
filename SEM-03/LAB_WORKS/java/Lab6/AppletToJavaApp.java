
// removing the import files and extended Applet class
class AppletToJavaApp
{
	// making the init method a constructor
	AppletToJavaApp()
	{
		System.out.println("Initialized");
	}

	public void start()
	{
		System.out.println("Starting applet");
	}
	// public void paint(Graphics g)
	// {
	// 	g.drawString("Hello Mister!!", 50 , 50);
	// }
	public void stop()
	{
		System.out.println("Stopping applet");
	}
	public void destroy()
	{
		System.out.println("Destroyed");
	}


// Adding main function
		public static void main(String[] args) {
			AppletToJavaApp obj = new AppletToJavaApp();

				// calling the functions
				obj.start();
				obj.stop();
				obj.destroy();
		}
}