class One {
    private void mssg(){
        System.out.println("This is a private method.");
    }

    public static void show(){
        System.out.println("This is a static method.");
    }
}

class PrivateStatic extends One {

    private void mssg(){
        System.out.println("Trying to override private method.");
    }

    public static void show(){
        System.out.println("Trying to override static method.");
    }

    public static void main(String[] args) {
        One obj = new PrivateStatic();

            obj.mssg();//throws an error as the method is private and cannot be accessed from derived class.

            obj.show();//prints This is a static method.
    }
}