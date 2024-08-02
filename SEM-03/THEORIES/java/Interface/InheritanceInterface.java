interface InterfaceA
{
	public void message1();
}

interface InterfaceB
{
	public void message2();
}

interface InterfaceC extends InterfaceA, InterfaceB
{
	public void message3();
}

class InheritanceInterface implements InterfaceC
{
	public void message1(){
		System.out.println("1st interface");
	}

	public void message2(){
		System.out.println("2nd interface");
	}

	public void message3(){
		System.out.println("3rd interface");
	}

		public static void main(String[] args) {
			InheritanceInterface obj = new InheritanceInterface();

				obj.message1();
				obj.message2();
				obj.message3();
		}
}
