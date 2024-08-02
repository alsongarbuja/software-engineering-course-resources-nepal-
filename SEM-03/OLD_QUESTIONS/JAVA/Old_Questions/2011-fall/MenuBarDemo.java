import java.awt.*;
import java.awt.event.*;

class MenuBarDemo implements ActionListener {

    Dialog d;

    MenuBarDemo(){
        Frame f = new Frame();

        f.setSize(400, 400);
        f.setVisible(true);
        
        d = new Dialog(f, "Exiting from program", false);
        d.setLayout( new FlowLayout() ); 
        MenuBar menubar = new MenuBar();

        Menu file = new Menu("File");
        Menu help = new Menu("Help");

        menubar.add(file);
        menubar.add(help);

        MenuItem open= new MenuItem("Open");
        MenuItem close = new MenuItem("Close");

        file.add(open);
        file.add(close);

        close.addActionListener(this);

        f.setMenuBar(menubar);
    }

    public void actionPerformed(ActionEvent ae){
        d.setVisible(true);
    }

    public static void main(String[] args) {
        new MenuBarDemo();
    }
}