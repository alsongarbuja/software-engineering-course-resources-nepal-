class exceptionDemo
{

	boolean division(){
		int a = 7;

			try{
				System.out.println(a/0);
			}catch(ArithmeticException e){
				System.out.println(e);
				return true;
			}catch(Exception e){
				System.out.println(e);
				return true;
			}finally{
				System.out.println("It is a finally block statment.");
			}

			return false;
	}

	public static void main(String[] args) {
		exceptionDemo obj = new exceptionDemo();

			System.out.println(obj.division());
	}
}