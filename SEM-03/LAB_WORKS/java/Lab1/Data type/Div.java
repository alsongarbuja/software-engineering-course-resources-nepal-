class Div
{
	public static void main(String[] args) {
		int num1 = 10;
		int num2 = 0xF2; //0x indicates hexadecimal
		double num3 = 6.5; // floating types can't have hexa or octal
		float num4 = 2.5f; // f is needed to specify it as float type otherwise wil be double type
		char letter = 'a';


			System.out.println(num1 + " " + num2 + " " + num3);
			System.out.println(num4 + " " + letter);

	}
}