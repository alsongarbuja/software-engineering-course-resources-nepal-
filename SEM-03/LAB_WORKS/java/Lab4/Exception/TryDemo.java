
class TryDemo
{
	void demo()
	{
		int num = 1;

			try
			{
				System.out.println(num/0);
			}
			catch(ArithmeticException e)
			{
				System.out.println(e);
			}
			catch(Exception e1)
			{
				System.out.println(e1);
			}
			finally
			{
				System.out.println("Finally block!");
			}
	}

	public static void main(String[] args) {
		TryDemo obj = new TryDemo();

			obj.demo();
	}
}