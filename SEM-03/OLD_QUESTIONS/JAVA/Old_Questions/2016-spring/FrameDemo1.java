import java.awt.*;

// Extending Frame class way
// class FrameDemo1 extends Frame {
//     FrameDemo1(String title){
//         super(title);
//     }

//     FrameDemo1(){
//         setSize(400, 400);
//         setVisible(true);
//     }

//     public static void main(String[] args) {
//         FrameDemo1 obj = new FrameDemo1("My Frame");
//     }
// }

// normal way
class FrameDemo1 {
    FrameDemo1(){
        Frame f = new Frame();

        f.setSize(400, 400);
        f.setTitle("My Frame");
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new FrameDemo1();
    }
}