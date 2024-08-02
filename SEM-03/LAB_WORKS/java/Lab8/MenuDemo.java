import java.awt.*;
import java.awt.event.*;  

class MenuDemo  
{  
     MenuDemo()
     {  
         Frame f= new Frame("Menu Demo");  
         
         PopupMenu popupmenu = new PopupMenu("Edit");   
         
         MenuItem cut = new MenuItem("Cut");  
         cut.setActionCommand("Cut");

         MenuItem copy = new MenuItem("Copy");  
         copy.setActionCommand("Copy");  

         MenuItem paste = new MenuItem("Paste");  
         paste.setActionCommand("Paste");     

         popupmenu.add(cut);  
         popupmenu.add(copy);  
         popupmenu.add(paste);        
         
         f.addMouseListener(new MouseAdapter() 
         {  
            public void mouseClicked(MouseEvent e) 
            {              
                popupmenu.show(f , e.getX(), e.getY());  
            }                 
         }
         );  
         
         MenuBar mb=new MenuBar();  
         Menu menu=new Menu("Menu");  
         Menu submenu=new Menu("Sub Menu");  
         MenuItem i1=new MenuItem("Item 1");  
         MenuItem i2=new MenuItem("Item 2");  
         MenuItem i3=new MenuItem("Item 3");  
         MenuItem i4=new MenuItem("Item 4");  
         MenuItem i5=new MenuItem("Item 5");  
         menu.add(i1);  
         menu.add(i2);  
         menu.add(i3);  
         submenu.add(i4);  
         submenu.add(i5);  
         menu.add(submenu);  
         mb.add(menu);  

         f.setMenuBar(mb);  

         f.add(popupmenu);  

         f.setSize(400,400);  
         f.setLayout(null);  
         f.setVisible(true);  
     }  
     
    public static void main(String args[])  
    {  
        new MenuDemo();  
    }     
}