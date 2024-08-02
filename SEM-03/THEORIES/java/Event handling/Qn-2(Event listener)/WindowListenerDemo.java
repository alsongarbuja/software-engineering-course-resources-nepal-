import java.awt.*;  
import java.awt.event.WindowEvent;  
import java.awt.event.WindowListener;  

class WindowListenerDemo implements WindowListener
{  
    WindowListenerDemo()
    {  
        Frame f = new Frame();

        f.addWindowListener(this);  
          
        f.setSize(400,400);  
        f.setLayout(null);  
        f.setVisible(true);  
    }  
      
    public static void main(String[] args) 
    {  
        new WindowListenerDemo();  
    }  

    public void windowActivated(WindowEvent arg0) {  
        System.out.println("activated");  
    }  
    public void windowClosed(WindowEvent arg0) {  
        System.out.println("closed");  
    }  
    public void windowClosing(WindowEvent arg0) {  
        System.out.println("closing");  
        // dispose();  
    }  
    public void windowDeactivated(WindowEvent arg0) {  
        System.out.println("deactivated");  
    }  
    public void windowDeiconified(WindowEvent arg0) {  
        System.out.println("deiconified");  
    }  
    public void windowIconified(WindowEvent arg0) {  
        System.out.println("iconified");  
    }  
    public void windowOpened(WindowEvent arg0) {  
        System.out.println("opened");  
    }

}

