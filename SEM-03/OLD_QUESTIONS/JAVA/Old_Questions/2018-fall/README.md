# 2018-Fall

## 1a

### Difference between interface and abstract class? Explain the use of interface to achieve multiple inheritance.

[2011-fall#1b]()

>Use of interface for multiple inheritance

- Java does not support multiple inheritance due to ambugiuty problem.
- But using interface we can gain certain amount of multiple inheritance.
- The 2 ways to gain multiple inheritance by using interface are:-
    - Implementing multiple interface in a class.

        Example syntax:
            class ClassName implements Interface1, Interface2 { }

    - Inheriting multiple interface in a interface.

        Example syntax:
            interface InterfaceName extends Interface1, Interface2 { }

## 1b

### What are the uses of abstratct keyword? Explain with a suitable program.

- `Abstract keyword` is used to make methods or class abstract.
- Methods and classes are made abstract to make a blue print for inheriting class.
- It is used to obtain abstraction.
	- Some Feature of `abstract class` are:-
		- They can have a normal methods too.
		- They cannot have their own object.

[Abstract keyword Example]()

## 2a

### Create a class Employee with id, name, post and salary. Create a parameterized constructor to initialize the instance variables. Override the toString() method to display the employee details.

[Solution to the given question of paramterizwd constructor]()
```java
public class Employee {
	int id;
	String name, salary;
	double salary;

	Employee(int id, String name, String post, double salary){
		this.id = id;
		this.name = name;
		this.post = post;
		this.salary = salary;
	}

	public String toString(){
		return "ID = "+id+",Name = "+name+",Post = "+post+",Salary = "+salary; 
	}

	public static void main(String [] args){
		Employee obj = new Employee(1,"Alson", "Some", 120000);

		System.out.println(obj.toString());
	}
}

//output - ID = 1,Name = Alson,Post = Some,Salary = 120000
```

## 2b

### What is exception handling? Explain, Write a program to handle Arithmetic Exception.

>Exception handling

[2016-spring#3a]()

```java
import java.io.*;

public class Demo {
	public static void main(String [] args){
		int n = 3, d = 0;
		
		try{
			System.out.println(n/d);
		}catch(ArithmeticException e){
			System.out.println(e);
		}catch(Exception e1){
			System.out.println(e1);
		}
	}
}
```

## 3a

### What is a dialog box? Explain its types. Write a program to create your own dialog box.

>Dialog box and its type

- `Dialog box` is a component of AWT and SWING that is used to create a popup box with some content to display.
- `Dialog` class is used to make a dialog box.
- Syntax: `Dialog d = new Dialog(frame, "title", visible<true/false>);`
- There are 2 types of dialog box in java they are:-
	- **Modal Dialog:** Those types of dialog box which block input to other top-level windows. Choosing a file to open is a good example of it.
	- **Modeless Dialog:** Those types of dialog box which allow input to other window. Find text dialog is an example of it.

```java
import java.awt.*;

public class DialogDemo {
	DialogDemo(){
		Frame f = new Frame();

		Dialog d = new Dialog(f, "Custom dialog box");
		d.setVisible(true);

		f.setSize(400, 400);
		f.setVisible(true);
	}

	public static void main(String [] args){
		new DialogDemo();
	}
}

```

## 3b

### What are the different types of streams supported by java? Explain. A data file "emp.txt" contains name, address and salary of 30 employees. Write a program to display only those records who are from "Kathmandu".

>Stream classes in java

- Stream class are those classes that allows stream behaviour in java file handling.
- Stream is linked to a physical layer by java io system to make input and output operations.
- We use `java.io` package to use stream classes.
- There are two types of Stream class in java:-
	-  **Byte Stream**
	
			Some of the Byte Stream classes are:-
			BufferedInputStream
			BufferedOuputStream
			DataInputStream
			DataOutputStream
			FileInputStream
			FileOutputStream
			InputStream
			OutputStream
			PrintStream
		
	-  **Character Stream**

			Some of the character Stream classes are:-
			BufferedReader
			BufferedWriter
			FileReader
			FileWriter
			InputStreamReader
			OutputStreamReader
			Reader
			Writer
			PrintWriter

[Solution to given program of displaying info from a text file]() //TODO

## 4a

### Create a swing GUI that contains two buttons(add and suntarct) and three text fields. When the buttons are clicked sum or difference of values of first two text fields should be displayed in the third text field respectively.

```java
import javax.swing.*;
import java.awt.event.*;

public class SumAndDiffDemo implements ActionListener {
    
    JTextField tf1, tf2, tf3;
    JButton addBtn, subBtn;

    SumAndDiffDemo(){
        JFrame f = new JFrame();

            f.setSize(1000, 1000);
            f.setVisible(true);

        tf1 = new JTextField("10");
        tf2 = new JTextField("5");
        tf3 = new JTextField("");
        tf1.setBounds(50, 50, 100, 30);
        tf2.setBounds(50, 100, 100, 30);
        tf3.setBounds(50, 150, 100, 30);

        addBtn = new JButton("Add");
        subBtn = new JButton("Sub");
        addBtn.setBounds(50, 200, 50, 20);
        subBtn.setBounds(50, 250, 50, 20);

        addBtn.addActionListener(this);
        subBtn.addActionListener(this);

        f.add(tf1);
        f.add(tf2);
        f.add(tf3);
        f.add(addBtn);
        f.add(subBtn);
    }

    @Override
    public void actionPerformed(ActionEvent e){
        
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        int result;

        if(e.getSource()==addBtn){
            result = num1+num2;
            tf3.setText("The sum is "+ String.valueOf(result));
        }else{
            result = num1-num2;
            tf3.setText("The difference is "+ String.valueOf(result));
        }
            
    }

    public static void main(String[] args) {
        new SumAndDiffDemo();
    }
}
```

## 4b

### Explain the use of URL and URL Connection class with a suitable program.

[Explanation and Difference between URL class and URL connection class {2014-Spring#5a}]()

[URL class example]()

[Url connection class example]()

## 5a

### Write a program to display all records from database table. Assume the name of database and table yourself.

```java
import java.sql.*;

public class ReadDBDemo {
    
    public static void main(String[] args) throws ClassNotFoundException, SQLException{
        
        Class.forName("com.mysql.cj.jdbc.Driver");

        // Here testdb = databse name, 3306 localhost port number , root = username, "" = password
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");

        Statement st = con.createStatement();

		// employee = table 
		// let's assume it contains ID, Name and Post
        String sql = "SELECT * FROM employee";

        ResultSet rs = st.executeQuery(sql);

            while(rs.next()){
                System.out.println("ID: "+ rs.getInt(1));
                System.out.println("Name: "+ rs.getString(2));
                System.out.println("Post: "+ rs.getString(3));
            }
    }

}
```

## 5b

### Differentiate between TCP and UDP. Create a TCP client application that takes input from user and sends it to the server.

>Difference between TCP and UDP

[2018-spring#5a]()

[TCP program of chat app {2016-fall/SocketProgram}]()

## 6a

### Difference between applet and normal java program? List out the steps for converting applet into application.

[2018-spring#3b]()

>Applet to java application

```
Step 1: Import `java.awt.*` and remove `java.applet.*`
Step 2: Extend `Frame` rather than `Applet`
Step 3: Change the `init()` method to a `Constructor`
Step 4: Add `setSize()` and `setVisible()` for frame
Step 5: Add a `main` method.
Step 6: Remove HTML file. And Remove the comment if any
```

## 6b

### How can you create closable frames in swing and AWT? Write a program to draw a bar chart.

```java
import java.awt.*;
import java.awt.event.*;

public class ClosableFrameDemo extends WindowAdaptor {

	Frame f;

	ClosableFrameDemo(){
		f = new Frame();

		f.addWindowListener(this);
		f.setSize(100, 100);
		f.setVisible(true);
	}

	@override
	public void windowClosing(WindowEvent w){
		f.dispose();
	}

	public static void main(String [] args){
		new ClosableFrameDemo();
	}
}
```

```java
import java.awt.*;

public class BarChartDemo extends Canvas {
	
	public void paint(Graphics g){
		g.setColor(Color.BLACK);
        g.fillRect(50, 50, 30, 100);

        g.setColor(Color.BLUE);
        g.fillRect(150, 110, 30, 40);

        g.setColor(Color.GREEN);
        g.fillRect(250, 70, 30, 80);

        g.setColor(Color.RED);
        g.drawString("Java", 50, 160);
        g.drawString("C", 150, 160);
        g.drawString("C++", 250, 160);
	}

	public static void main(String [] args){
		BarChartDemo ob = new BarChartDemo();

		Frame f = new Frame();

		f.setSize(400, 400);
		f.setVisible(true);
		f.add(ob);
	}
}
```

## 7a, Rfletion API

[2011-fall#2b]()

## 7b, History of Java

	1992 -- Started as internal project at sun microsystem
		 -- Headed by JAmes Gosling, Patrick Naughton and Mike Sheridan
		 -- Called 'Green Talk' with extension '.gt' and later called 'oak'
	1995 -- was renamed as Java, since oak was already registered by oak technologies.
		 -- Java(1.0a) both alpha and beta version relased for download.

	Jan,1996 -- JDK(JAVA DEVELOPMENT KIT)1.0 was released.
	Feb,1997 -- JDK 1.1
	Dec,1998 -- J2SE 1.2(Java 2 Standard Edition)
	May,2000 -- J2SE 1.3
	Feb,2002 -- J2SE 1.4
	Spe,2004 -- J2SE 5.0
	Dec,2006 -- Java SE 6
	July,2011 -- Java SE 7
	March,2014 -- Java SE 8
	Sep,2017 -- Java SE 9
	March,2018 -- Java SE 10
	Sep,2018 -- Java SE 11(LTS)
	March,2019 -- Java SE 12
	Sep,2019 -- Java SE 13

## 7c, JDBC API