public class ConstructorDemo {
    
    int num;
    String name;

    // Default Constructor
    ConstructorDemo(){
        num = 0;
        name = "Default_name";
    }

    // Parameterized Constructor
    ConstructorDemo(int num){
        this.num = num;
    }

    // Copy or Object Constructor
    ConstructorDemo(ConstructorDemo obj){
        num = obj.num;
        name = obj.name;
    }

    public static void main(String[] args) {
        new ConstructorDemo(); //Calls the default constructor

        ConstructorDemo ob1 = new ConstructorDemo(1); //calls the parameterized constructor
        ConstructorDemo ob2 = new ConstructorDemo(ob1); //calls the object constructor

            System.out.println("num of ob1: "+ ob1.num);
            System.out.println("name of ob1: "+ ob1.name);
            System.out.println("num of ob2: "+ ob2.num);
            System.out.println("name of ob2: "+ ob2.name);
    }
}