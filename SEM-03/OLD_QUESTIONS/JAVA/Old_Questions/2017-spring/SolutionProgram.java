public class A {
    int num;

        public void displayMssg(){
            System.out.println("Hello");
        }
}

public class B extends A {

    public static void main(String[] args) {
        B obj = new B();

            obj.num = 3;
            obj.displayMssg();
    }
    
}