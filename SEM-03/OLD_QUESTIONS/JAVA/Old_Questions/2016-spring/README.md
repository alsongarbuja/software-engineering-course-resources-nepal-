# 2016-Spring

## 1a

### Define Java. Write a program to print "Hello Java" in a console.

- Java is an OOP Language.
- It is platform independent.
- It is used to make Desktop application, back end web development, etc.
- It was developed by Sun Microsystems in 1991 later acquired by Oracle. 

```java
class ClassName {
	public static void main(String[] args){
		System.out.println("Hello Java");
	}
}
```

## 1b

### Define Polymorphism. How should we implement polymorphism in java? Explain with example.

- Polymorphism is a feature of OOP Language which allows to have same function with different functionality.
- In java we can gain polymorphism through:-
	- **Method Overriding:** The process of over writing or re defining a function inherited from the parent class.
	- **Method Overloading:** The process of making methods with same name having different types or number of arguments passed.

```java
//Method overloading
public class DemoOne {
	public void add(int n1, int n2){
		System.out.println("Sum of "+n1+" and "+n2+" is "+n1+n2);
	}
	
	public void add(double n1, double n2){
		System.out.println("Sum of "+n1+" and "+n2+" is "+n1+n2);
	}

	public static void main(String [] args){
		DemoOne obj = new DemoOne();

		obj.add(2,4);
		obj.add(2.2,4.5);
	}
}
```

```java
//Method override
public class BaseClass {
	public void mssg(){
		System.out.println("Base class");
	}
}

public class DemoTwo {

	@override
	public void mssg(){
		System.out.println("DemoTwo class");
	}

	public static void main(String [] args){
		DemoOne obj = new DemoOne();

		obj.mssg();
	}
}
```

## 2a

### What is Interface? Define with example.

- Interface is a special type of class in java which doesn't have any instance variables and have methods with declaration part only.
- `interface` keyword is used to make a Interface.
- It provides abstraction.
- To implement a interface in a class we use `implement` keyword.

```java
interface InterA {
    public void dis();
}

class Demo implements InterA {
    public void dis(){
        System.out.println("This is a implementation of Interface");
    }

    public static void main(String [] args){
        Demo ob = new Demo();

        ob.dis();
    }
}
```

## 2b

### Create a class MyClass in a package MyPack. Import newly created class MyClass from IpmClass.

```java
//Inside MyPack folder
package MyPack;

public class MyClass {
	public void dis(){
		System.out.println("MyClass from MyPack");
	}
}

//Inside some other folder
import MyPack.MyClass;

public class IpmClass {
	public static void main(String [] args){
		MyClass obj = new MyClass();

		obj.dis();
	}
}
```

## 3a

### What is the Usage of Exception Handling? Define with example. 

- The process of handling errors which occurs during runtime more wisely and easily is known as Exception handling.
- Exception has to be manually handled.
- Some of the ways of handling exception are:-
    - `try` and `catch` blocks
    - `throw` or `throws` keyword

- It is used to handle errors that occurs during runtime.

[Example 2018-fall#arithmeticException]()

## 3b

### Create a program to write "Hello World" in a file abc.txt

```java
import java.io.*;

class FileHandleDemo {
	FileHandleDemo(){
		try
		{
			FileWriter fw = new FileWriter("abc.txt");
			fw.write("Hello World");
			fw.close();
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
	public static void main(String[] args){
		new FileHandleDemo();
	}
}
```

## 4a

### Define Applet life cycle.

- Applet is a special kind of Java program that can be run by the browser.
- It does not need any main method to run as it is runned by the browser not the JAVA compiler.
- The time from the start of the applet in the browser to closing of the browser is the life cycle of applet.
- There are 4 states:-
	- **New Born State:** The state where the applet is first loaded to the browser and life cycle of applet begins.
		- `init()` method is called in this state.
		- Most of the initialization is done in this state.
	- **Running State:** The state when applet is active in the foreground and is interacting with user.
		- `start()` method is invoked in this state.
		- After `start()` method `run()` followed by `paint()` methods are invoked.
		- User interacts with applet program in this state.
	- **Idle State:** The state when the page conatining applet is halted temporarily.
		- `stop()` method is called in this state.
		- After this state either `destroy()` or `start()` method is invoked according to the users choice.
	- **Dead State:** The state when applet program(i.e applet containing web page) is closed.
		- `destroy()` method is invoked in this state.
		- The `destroy()` method only gets invoked if the browser is shut down normally.


## 4b

### What is Frame? Create a frame with following attributes:
### Height = width = 400, Title = My Frame

- A frame is a container of `AWT` that is used to make a window containing other graphical AWT components.
- It has methods like:-
	- `setSize(width, height)`
	- `setVisible(true/false)`
	- ` setLayout(LayoutType object)`
	- `setTitle("title")` 

```java
import java.awt.*;

public class FrameDemo {
	public static void main(String [] args){
		Frame f = new Frame();

		f.setSize(400, 400);
		f.setVisible(true);
		f.setTitle("My Frame");
	}
}
```

##  5a

### Create a Frame with one button and one textfield, when user clicks on the button the text field entered on textfield should be changed to uppercase.

```java
import javax.swing.*;
import java.awt.event.*;

public class Demo implements ActionListener {

    JTextField tf;
    JButton btn;

    Demo(){
        JFrame f = new JFrame();

        f.setSize(500, 500);
        f.setVisible(true);

        tf = new TextField("hello");
        tf.setBounds(20, 20, 50, 10);

        btn = new Button("UpperCase");
        btn.setBounds(20, 40, 30, 10);
    
        btn.addEventListener(this);

        f.add(tf);
        f.add(btn);
    }
    
    @override
    public void actionPerformed(ActionEvent e){
        String st = tf.getText().toUpperCase();
        tf.setText(st);
    }

    public static void main(String [], args){
        new Demo();
    }
}
```

## 5b

### Explain Event handling with various types of event available on java.

- Event handling is the process of handling different kind of events like click, drag, etc inside a java program.
- The `java.awt.event` package provides many event classes and Listener interfaces for event handling.
- Different types of event available on java are:-

|**Event Classes**|**Listener Interfaces**|
|--|--|
|ActionEvent	|ActionListener|
|MouseEvent	|MouseListener and MouseMotionListener|
|MouseWheelEvent	|MouseWheelListener|
|KeyEvent	|KeyListener|
|ItemEvent|	ItemListener|
|TextEvent	|TextListener|
|AdjustmentEvent|	AdjustmentListener|
|WindowEvent|	WindowListener|
|ComponentEvent|	ComponentListener|
|ContainerEvent|	ContainerListener|
|FocusEvent	|FocusListener|

## 6a

### Define Socket Programming with example.

- Java socket programming is used for communnication between applications running on different JRE.
- It can be connection-oriented or connection-less.
- `Socket` and `ServerSocket` classes are used for connection-oreinted socket programming.
- `DatagramSocket` and `DatagramPacket` classes are used for connection-less socket programming.

[Example at 2016-Fall-SocketProgram]()

## 6b

### Why is JDBC is required in java. Explain the role of JDBC Driver.

- It is used to connect the java application to the database.
- It is used to execute queries and update statements to the database.
- It is used to retrive the result recieved from the database.

>Role of JDBC Driver

- It is used to enable java application to interact with database.


## 7a, Inheritance

- Inheritance is a feature of OOP Language that allows to inherit data members and methods of one class *(i.e parent class)* to another class *(i.e child class)*
- In java `extends` keyword is used to inherit a parent class to a child class.
- In java `multiple inheritance` is not supported due to ambuigiuty.
- But we can use interfaces to obtain some level of multiple inheritance.

## 7b, URL

## 7c, Java Virtual Machine

- JVM is a virtual machine that interprets the `Byte code` generated by JDK into a executable file for the running OS.
- It is a platform dependent software in itself but it makes the Java language a platform independent language.
- It gets the corresponding machine codes as the running OS when downloading the JDK.

## 7d, ResultSet