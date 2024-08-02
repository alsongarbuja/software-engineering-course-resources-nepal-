import java.net.*;
import java.io.*;

public class MessageDemoServer {
    
    public static void main(String[] args) throws Exception {
        ServerSocket ss = new ServerSocket(3333);
        Socket s = ss.accept();

            DataInputStream din = new DataInputStream(s.getInputStream());

            System.out.println("Client says: " + din.readUTF());

            din.close();
            s.close();
            ss.close();
    }

}