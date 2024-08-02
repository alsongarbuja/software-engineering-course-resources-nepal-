import java.awt.*;
import java.awt.event.*;

class ClosableFrameDemo extends WindowAdapter {
    Frame f;

    ClosableFrameDemo(){
        f = new Frame();
        f.addWindowListener(this);

        f.setSize(400, 400);
        f.setVisible(true);
    }

    public void windowClosing(WindowEvent e){
        f.dispose();
    }

    public static void main(String[] args) {
        new ClosableFrameDemo();
    }

}