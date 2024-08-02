import java.awt.*;

public class SolutionFrame {
    
    SolutionFrame(){
        Frame f = new Frame();

            f.setSize(400, 400);
            f.setVisible(true);

        TextField tf1 = new TextField();
        TextField tf2 = new TextField();
        TextField tf3 = new TextField();

        Label l1 = new Label("arg1");
        Label l2 = new Label("arg2");
        Label l3 = new Label("result");

            MenuBar menubar = new MenuBar();
            Menu file = new Menu("File");

            MenuItem add = new MenuItem("ADD");
            MenuItem sub = new MenuItem("SUB");

            menubar.add(file);
            file.add(add);
            file.add(sub);

        f.setMenuBar(menubar);
        f.add(l1);
        f.add(tf1);
        f.add(l2);
        f.add(tf2);
        f.add(l3);
        f.add(tf3);
    }

    public static void main(String[] args) {
        new SolutionFrame();
    }
}