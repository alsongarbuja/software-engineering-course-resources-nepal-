import java.rmi.Naming;

public class ClientRMI {
    public static void main(String[] args) {
        try {
            // Lookup the remote object
            Hello obj = (Hello) Naming.lookup("rmi://localhost:1099/hello");
            // Invoke the remote method
            String message = obj.sayHello();
            System.out.println(message);
        } catch (Exception e) {
            System.err.println("Client exception: " + e.toString());
            e.printStackTrace();
        }
    }
}
