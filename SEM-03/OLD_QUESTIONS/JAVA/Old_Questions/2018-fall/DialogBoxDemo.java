import java.awt.*;

public class DialogBoxDemo {
    
    DialogBoxDemo(){
        Frame f = new Frame();

            f.setSize(500, 500);
            f.setVisible(true);

        Dialog d = new Dialog(f, "Custom Dialog Box");
        d.setVisible(true);
    }

    public static void main(String[] args) {
        new DialogBoxDemo();
    }
}