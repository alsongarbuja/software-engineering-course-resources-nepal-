import java.io.*;

public class ReadString {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Input String:");
		String input = br.readLine();
		br.close();
		System.out.println("Input String is: " + input);
	}
}