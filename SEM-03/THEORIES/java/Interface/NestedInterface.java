interface outerInterface
{

	public void outer_method();

		interface innerInterface
		{
			public void inner_method();
		}
}

class NestedInterface implements outerInterface.innerInterface
{
	public void inner_method()
	{
		System.out.println("It is a nested interface");
	}

		public static void main(String[] args) {
			outerInterface.innerInterface ob = new NestedInterface();

				ob.inner_method();
		}
}