class test {
    public void printMssg(){
        System.out.println("This method is going to be overridden");
    }
}

class MethodOverrideDemo extends test {
    public void printMssg(){
        System.out.println("The method is overridden");
    }

    public static void main(String[] args) {
        MethodOverrideDemo obj = new MethodOverrideDemo();

            obj.printMssg(); // Prints "The method is overriden"
    }
}