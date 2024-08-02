import java.io.*;

public class ArithmeticExceptionDemo {
    
    ArithmeticExceptionDemo(){
        try {
            System.out.println(5/0);
        } catch (ArithmeticException e) {
            System.out.println(e);
        } catch (Exception e1){
            System.out.println(e1);
        }
    }

    public static void main(String[] args) {
        new ArithmeticExceptionDemo();
    }
}