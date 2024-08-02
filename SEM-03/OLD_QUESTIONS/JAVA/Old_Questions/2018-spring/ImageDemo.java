import java.awt.*;
import java.awt.event.*;

public class ImageDemo extends Frame {
    private static final long serialVersionUID = 1L;
    Image image;

    public static void main(String[] args) {
        new ImageDemo();
    }

    ImageDemo(){
        setSize(300, 300);
        setVisible(true);
    }

    public void paint(Graphics g){
        Toolkit tool = Toolkit.getDefaultToolkit();
        image = tool.getImage("fileName.jpg");
        g.drawImage(image, 20, 45, this);
    }
}