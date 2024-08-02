import java.net.*;
import java.io.*;

public class MessageDemoClient {
    
    public static void main(String[] args) {
        try {
            
            Socket s = new Socket("localhost", 3333);

            DataOutputStream dout = new DataOutputStream(s.getOutputStream());

            dout.writeUTF("Message From Pokhara University");
            dout.close();
            s.close();

        } catch (Exception e) {
            System.out.println(e);      
        }
    }

}