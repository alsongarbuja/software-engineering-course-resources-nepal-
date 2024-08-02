
public class House {
    String name;
    int age;

    public void showData(){
        System.out.println("It is overriden");
    }
}

class Employee extends House{

    double salary;

    @Override
    public void showData(){
        System.out.println("Name: "+ name);
        System.out.println("Age: "+ age);
        System.out.println("Salary: "+ salary);
    }
    
}

class Manager extends Employee{

    public static void main(String[] args) {
        Manager obj = new Manager();

            obj.showData();
    }
}
