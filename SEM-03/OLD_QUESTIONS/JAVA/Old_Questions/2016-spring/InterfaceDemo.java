interface intf {
    public void mssgDis();
}

public class InterfaceDemo implements intf {

    @Override
    public void mssgDis() {
        System.out.println("We override the method");
    }
    
    public static void main(String[] args) {
        InterfaceDemo obj = new InterfaceDemo();

        obj.mssgDis();
    }
}