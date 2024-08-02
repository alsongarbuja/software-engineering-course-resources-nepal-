import java.awt.*;  
import java.awt.event.*;  

class MouseListenerDemo implements MouseListener
{  
    Label l;  
 
    MouseListenerDemo()
    {  
    	Frame f = new Frame();

        	f.addMouseListener(this);  
          
	        l=new Label();  
	        l.setBounds(20,50,100,20);  
        
        f.add(l);  
        f.setSize(300,300);  
        f.setLayout(null);  
        f.setVisible(true);  
    }  
    public void mouseClicked(MouseEvent e) {  
        l.setText("Mouse Clicked");  
    }  
    public void mouseEntered(MouseEvent e) {  
        l.setText("Mouse Entered");  
    }  
    public void mouseExited(MouseEvent e) {  
        l.setText("Mouse Exited");  
    }  
    public void mousePressed(MouseEvent e) {  
        l.setText("Mouse Pressed");  
    }  
    public void mouseReleased(MouseEvent e) {  
        l.setText("Mouse Released");  
    }  

	public static void main(String[] args) 
	{  
    	new MouseListenerDemo();  
	}  
}  
