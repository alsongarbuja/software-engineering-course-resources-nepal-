import java.io.*;

public class FileHandle {
    
    public static void main(String[] args) {
        try {
            
            FileReader fr = new Filereader("abc.txt");

            FileWriter fw = new FileWriter("abc.txt");

            int i;

                while((i=fr.read())!= -1)
                    fw.write((char)i);
                    fr.close();

            fw.close();

        } catch (Exception e) {
            System.out.println(e);        
        }    
    }

}