import java.io.*;

class mergeLineByLine
{
	public static void main(String[] args) {
			
			try
			{
				PrintWriter pw = new PrintWriter("three.txt");

				BufferedReader br1 = new BufferedReader(new FileReader("one.txt"));
				BufferedReader br2 = new BufferedReader(new FileReader("two.txt"));

				String line1 = br1.readLine();
				String line2 = br2.readLine();

					while(line1 != null || line2 != null)
					{
						if(line1 != null)
						{
							pw.println(line1);
							line1 = br1.readLine();
						}
						
						if(line2 != null)
						{
							pw.println(line2);
							line2 = br2.readLine();
						}
					}

					pw.flush();

					br1.close();
					br2.close();
					pw.close();
			}
			catch(Exception e){
				System.out.println(e);
			}
		}	
}