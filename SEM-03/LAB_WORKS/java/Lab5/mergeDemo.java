import java.io.*;

class mergeDemo
{
	public static void main(String[] args) {
		
		// to keep text from two files
		// String data1 = ""; 
		// String data2 = "";

		try
		{
			FileWriter obj1 = new FileWriter("one.txt");
				obj1.write("222\n333\n444\n");
				obj1.close();

			FileWriter obj2 = new FileWriter("two.txt");
				obj2.write("aaa\nbbb\nccc\n");
				obj2.close();

				try{
					FileWriter obj3 = new FileWriter("third.txt");

					FileReader fr1 = new FileReader("one.txt");
						int i;

							while((i=fr1.read())!= -1)
								// data1 += (char)i; 
								obj3.write((char)i);
								fr1.close();

						// obj3.write(data1);

					FileReader fr2 = new FileReader("two.txt");
						int j;

							while((j=fr2.read())!= -1)
								// data2 += (char)j;
								obj3.write((char)j);
								fr2.close();

						// obj3.write(data2);

						obj3.close();		
										
				}catch(Exception e){
					System.out.println(e);
				}

					System.out.println("Merged.");

		}catch(Exception e){
			System.out.println(e);
		}

			System.out.println("\nSuccessFull....");
	}
}