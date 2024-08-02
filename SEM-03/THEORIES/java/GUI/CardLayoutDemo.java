import java.awt.*;  
  
class CardLayoutDemo
{  

    CardLayoutDemo()
    {  
           
        Frame f = new Frame("Card layout");

        f.setVisible(true);
        f.setSize(700, 700);

        Button b1 = new Button("Apple");  
        Button b2 = new Button("Boy");  
        Button b3 = new Button("Cat");    
              
        f.add(b1);f.add(b2);f.add(b3);  
              
            f.setLayout(new CardLayout(10, 40)); // hspace 10 and vspace 40
    }  
  
    public static void main(String[] args) 
    {  
        new CardLayoutDemo();  
    }  
} 