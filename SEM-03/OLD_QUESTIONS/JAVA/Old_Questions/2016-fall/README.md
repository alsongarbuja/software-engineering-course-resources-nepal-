# 2016-Fall

## 1a

### How does Java support re-usablilty? Provide examples.

- Java is a platform independent langauge, And an OOP langauge. It supports features of OOP like inheritance, polymorphism, etc that makes re-usability of code possible and easier.
- Java have its own features like packages, etc that allows java program to have pack or group of classes, interfaces and other packages that can be used to again and again whenever necessary.

## 1b

### Discuss about the concept of Instance variable hiding in java. Illustrate with a code example.

[2018-Spring#1b]()

## 2a

### Make a class Human with a name and age. Make a class Employee inherit from Human. Add instance variable salary of type double. Supply a method showData() that prints the Employee's name, age and salary. Make a class Manager inherit from Employee. Supply appropriate showData() methods for all classes. Provide a test program that tests these classes and methods.

[Multilevel inheritace Program solution]()

## 2b

### Why is exception handling essential? Differentiate between checked and unchecked exception with relevant examples.

>Usage of Exception handling

[2016-Spring#3a]()

>Difference between checked and unchecked exceptions

|**Checked Exception**|**Unchecked Exception**|
|--|--|
|Those exception which are checked during compile time.|Those exceptions which are checked during runtime.|
|If they are not handled then compiler gives error.|If they are not handled then compiler does not give any error.|

## 3a

## Disscus about the Life cycle of an Applet.

[2016-spring#4a]()

## 3b

### Write an Applet program to illustrate the message sharing between HTML and Applet.

[Message sharing betwwen HTML and Applet]()

## 3c

## Difference between Panel and Frame

|**Panel**|**Frame**|
|--|--|
|An AWT component which represents a simple container that can attach other GUI components including other panel.|An AWT component which is a top level window with border and title.|
|It is a Subclass of container|It is a Subclass of Window|
|It doesnot have a title bar.|It has a title bar.|
|It does not have a border.|It has a border.|

## 4a

### Write a program to generate a Frame with two buttons "BLACK" and "BLUE". When a button is clicked it should change the background color of the Frame to respective color.

```java
import java.awt.*;
import java.awt.event.*;

public class BackgroundDemo implements ActionListener{
    
    Frame f;
    Button black, blue;

    BackgroundDemo(){
    	f = new Frame();
    	
        f.setSize(600, 600);
        f.setVisible(true);
        f.setLayout(null);

        black = new Button("BLACK");
        blue = new Button("BLUE");

        black.setBounds(40, 30, 40, 20);
        blue.setBounds(40, 60, 40, 20);

        black.addActionListener(this);
        blue.addActionListener(this);

        f.add(black);
        f.add(blue);
    }

    public void actionPerformed(ActionEvent a){
    	Button source = (Button) a.getSource();
    	
        if(source.getLabel() == "BLACK"){
            f.setBackground(Color.BLACK);
        }else{
            f.setBackground(Color.BLUE);
        }
    }

    public static void main(String [] args){
        new BackgroundDemo();
    }
}
```

## 4b

### Write a program to draw a 2D rectangle in green color. Next draw flag of nepal inside the rectangle. Write a string "MY NEPAL" below the rectangle.

```java
import java.awt.*;

class FlagInRect extends Canvas {

    public void paint(Graphics g)
	{
        g.drawRect(50, 30, 400, 600);

		g.setColor(Color.BLUE);
			int x[] = {100, 100, 350, 130, 310, 100};
			int y[] = {50, 500, 500, 270, 270, 50};
		g.drawPolygon(x, y, 6);

		g.setColor(Color.RED);
			g.fillPolygon(x, y, 6);

		g.setColor(Color.WHITE);
			g.fillOval(120, 370, 70, 70);
            g.drawArc(120, 100, 50, 100, 0, -180);
        
        g.setColor(Color.BLACK);
        g.drawString("My Nepal", 150, 650);
	}

	public static void main(String[] args) 
	{
		FlagInRect nf = new FlagInRect();

		Frame f = new Frame();

			f.setSize(800, 800);
			f.setVisible(true);
			f.add(nf);
	}
}
```

## 5a

### What is socket? Differentiate between datagram and stream communication.

- A socket is simply a endpoint for communnications between the machines.
- The `Socket class` can be used to create a socket.

>Difference between datagram communication and stream communication

|**Datagram communication**|**Stream communication**|
|--|--|
|It is a connection less communication.|It is a conncetion oriented communication.|
|There is no connection just a source and a destination.|There is a pipe like connection allowing for duples connection.|
|It is unreliable.|It is reliable.|
|It doesnot maintain any sequence.|It maintains sequence.|

## 5b

### Write the steps to create a client server program. Provide code snippet to for each steps.

[2016-spring#6a]()

## 6a 

### What is ResultSetMetadata. Provide a simple example code to illustrate its usage.

- The interface used to get the data about the data retrived from the resultset is called ResultSetMetadata.
- We can get data about the table like number of colum, column name, its type, etc.
- Some methods used to get meta data through resultsetmetadata are:-
    - `getColumnCount()` throws SQLException.
    - `getColumnName(int index)` throws SQLException.
    - `getColumnTypeName(int index)` throws SQLException.

[Example code]()

## 6b

### Different types of database drivers

[2018-spring#7]()

## 7a, Assigment vs initialization

[2015-Fall#1a]()

## 7b, Closable JFrame

- Closable Frame or JFrame are those type of Frame which can be closed.
- The default Frame which we make using `AWT` Frame and `Swing` JFrame cannot be closed by pressing the close menu in the Frame window instead we press `ctrl+c` in the command prompt to close them.
- We use the `WindowAdapter` class to implement some methods that can be used to make a closable frame.

## 7c, Runtime Polymorphism

- Runtime Polymorphism (or also known as dynamic dispatching) is the type of polymorphism that is gained at the runtime. 
- In Java any many other OOP languages it is obtained by method overriding.
- It makes the program more dynamic and more efficient.