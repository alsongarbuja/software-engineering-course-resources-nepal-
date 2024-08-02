public abstract class AbstractDemo {
    
    abstract void showMssg();
    
    public void simpleFunction(){
        System.out.println("Abstract class also can have simple methods.");
    }   
}

public class MainClass extends AbstractDemo{

    @Override
    void showMssg() {
        System.out.println("Abstract methods must be overriden");
    }

    public static void main(String[] args) {
        MainClass obj = new MainClass();

            obj.showMssg();
            obj.simpleFunction();
    }
}