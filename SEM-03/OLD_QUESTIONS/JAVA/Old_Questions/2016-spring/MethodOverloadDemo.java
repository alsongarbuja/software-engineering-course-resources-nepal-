
class MethodOverloadDemo {
    public void showMssg(){
        System.out.println("With out any arguments.");
    }

    public void showMssg(String mssg){
        System.out.println(mssg);
    }

    public void showMssg(String msg, int num){
        System.out.println("With "+ num + msg);
    }

    public static void main(String[] args) {
        MethodOverloadDemo obj = new MethodOverloadDemo();

            obj.showMssg(); // prints "With out arguments"
            obj.showMssg("With a argument"); // prints "With a argument"
            obj.showMssg("arguments", 2); // prints "With 2 arguments"
    }
}