class Var
{
	public char letter; // instance variable

		void testing()
		{
			System.out.println(letter);
		}

	static public int num; // static instance variable

	public static void main(String[] args) {
		System.out.println(num);
		Var ob = new Var();
		ob.testing();

		double num1=0; // Local variable (it does not get any default value)

			System.out.println(num1);
	}
}