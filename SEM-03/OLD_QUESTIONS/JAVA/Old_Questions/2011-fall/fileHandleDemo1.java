import java.io.*;

class Student {

    String name;
    int roll;

    public static void main(String[] args) {
        Student obj = new Student();
        obj.name = "Alson";
        obj.roll = 6;

        String name = obj.name;
        int roll = obj.roll;

        try {
            
            FileWriter fw = new FileWriter("student.dat");
            fw.write("Name: "+ name + "\nRoll: " + roll);

            fw.close();

            FileReader fr = new FileReader("student.dat");

            int i;

                while((i=fr.read()) != -1)
                    System.out.print((char)i);
            
            fr.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}