interface interFace
{
	public void show();

		default void dis()
		{
			System.out.println("This is a default method.");
		}
}

class DefaultMethodInterface implements interFace
{
	public void show(){
		System.out.println("This is a normal method of interface.");
	}

		public static void main(String[] args) {
			DefaultMethodInterface obj = new DefaultMethodInterface();

				obj.show();
				obj.dis();
		}
}