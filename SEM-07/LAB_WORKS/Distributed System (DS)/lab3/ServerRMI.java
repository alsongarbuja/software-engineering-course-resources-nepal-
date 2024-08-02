import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;

public class ServerRMI {
    public static void main(String[] args) {
        try {
            // Create the remote object
            HelloImpl obj = new HelloImpl();
            // Register the remote object with the RMI registry
            Registry registry = LocateRegistry.createRegistry(1099);
            Naming.rebind("rmi://localhost:1099/hello", obj);
            System.out.println("Server ready");
        } catch (Exception e) {
           System.err.println("Server exception: " + e.toString());
            e.printStackTrace();
        }
    }
}

interface Hello extends java.rmi.Remote {
    public String sayHello() throws RemoteException;
}

class HelloImpl extends UnicastRemoteObject implements Hello {
    public HelloImpl() throws RemoteException {
       super();
    }
    public String sayHello() {
        return "Hello, world!";
    }
}
