# 2018-Spring

##  1a

### What do you mean by architectural-neutral? What are Wrapper class? Explain.	

- Architectural-neutral defines as something that is independent of different platforms, like codes that can run in any OS(Operating System). Java is a Architectural-neutral Language because of the JVM which is in it self Architectural dependent but makes the java files Architectural-neutral.
- Whenever we install JDK, the corresponding JVM is installed making java a platform independent language.
- As we know java has a feature write onces which means we have to write the java code only once and it will run on any platform, any OS. It is possible because of the JVM.
- By downloading the corresponding JVM it will automatically convert the byte code to the platform specific machine readable code, hence having to write the actual java code only once.

- They are the classes that provides a way to use primitive data types(int, boolean, etc ..) as objects.
- They are useful when we want to use primitive data types on collection frameworks(like: ArrayList, LinkedList, etc) which only deals with objects. OR during serialization we need objects not the primitve data types.
- The process of converting a primitive data type to a wrapper class is called Boxing and vice versa is called unboxing which is automatically done by Java, so we don't need to worry about that much.
- The wrapper classes are:-

|**Primitive Data Type**|**Wrapper Class**|
|-------------------|------------|
|byte|Byte|
|float|Float|
|boolean|Boolean|
|long|Long|
|int|Integer|
|char|Character|
|double|Double|

##  1b

### Mention scope of all modifiers(private, default, protected and public). Write a suitable program to illustrate the concept.

- Scope modifiers are pre defiened keywords that are used to specify the access level of the class, data member or methods.
- In java classes have 2 access levels:-
	- **Default:** Let's you make the class object anywhere inside the package.
	- **Public:** Let's ypu make the class object anywhere.
- And data memebers and methods have 4 access levels:-
	- **Public:** The access level of a public modifier is everywhere. It can be accessed from within the class, outside the class, within the package and outside the package.
	- **Private**: The access level of a private modifier is only within the class. It cannot be accessed from outside the class.
	- **Default**: The access level of a default modifier is only within the package. It cannot be accessed from outside the package. If you do not specify any access level, it will be the default.
	- **Protected**: The access level of a protected modifier is within the package and outside the package through child class. If you do not make the child class, it cannot be accessed from outside the package.

```java
// Inside pack-folder
// scope.java file
package pack-folder;

class ScopeDefault {
	public void mssg(){
        System.out.println("This has a default access modifier.");
    }
}

public class ScopePublic {
	public void printMssg(){
        System.out.println("This has a public access modifier.");
    }
}

protected class ScopeProtected {
	public void show() {
        System.out.println("This has a protected access modifier.");
    }
}

private class ScopePrivate {
	public void showMssg() {
        System.out.println("This has a private access modifier.");
    }
}

// outside pack-folder
// Mainclass.java
import pack-folder.*; // use to import all the classes inside pack-folder package.

class Mainclass extends ScopeProtected {
    public static void main(String[] args) {
        ScopeDefault sd = new ScopeDefault();
        ScopePublic sp = new ScopePublic();

        // ScopeProtected spr = new ScopeProtected(); 
        // we don't have to make it as it is inherited and we can use the object of MainClass for accessing the method

        MainClass mc = new MainClass();
        ScopePrivate spv = new ScopePrivate();//it shows error as the protected class doesnot allow it.

            sd.mssg();//it shows error as default modifiers have access level within the package only
            sp.printMssg();//shows the mssg
            mc.show();//shows the mssg
            spv.showMssg();
    }
}
```

##  2a

### What is method overloading? Can you override a private or static method in java? Explain with example.

- Method overloading is a way of gaining polymorphism in java where a method with same name can have different functionality.
- It can be done by adding or removing arguments or having different types of argument.
- It is also called as compile time polymorphism as the compiler already compiles them and determines which functionality to use when compiling the java file.

- No, we cannot override a private or static method.
- This is because;- 
	- `Static method` are bonded during compile time and the reference to that method is only one made by the compiler, hence overridding only hides the new static method and calls the compiled one.
	-  `Private method` cannot be inherited, hence trying to override a private method throws an compile time exception.
- **Though static and private methods can be overloaded** 

```java
class One {
    private void mssg(){
        System.out.println("This is a private method.");
    }

    public static void show(){
        System.out.println("This is a static method.");
    }
}

class PrivateStatic extends One {

    private void mssg(){
        System.out.println("Trying to override private method.");
    }

    public static void show(){
        System.out.println("Trying to override static method.");
    }

    public static void main(String[] args) {
        One obj = new PrivateStatic();

            obj.mssg();//throws an error as the method is private and cannot be accessed from derived class.

            obj.show();//prints This is a static method.
    }
}
```

## 2b

### How does interface differs from abstract class? Elaborate using code snippets to justify.

[2011-fall/answer](https://github.com/Alson33/All_Code_Subject_Notes/tree/master/3rd-Semester/JAVA/Old_Questions/2011-fall#1b)

##  3a

### Explain about FileReader and BufferedWriter class. How do you create own exception subclasses? Explain with an example.

-  File Reader Class is a class used to read characters data or text data.
-   Here, we can read character by character by character; not line by line.
- We can use the read() method of FileReader class to read the file character by character.

```java
Syntax:
	FileReader fr = new FileReader("fileName.txt");
```

- BufferedWriter is almost similar to FileWriter but it uses internal buffer to write data info file. So, if the number of write operation are more, the actual IO operations are less and performance is better.
- We should use BufferedWriter when no. of write operations are more.

- **Step 1:** Make a class with Exception at the end and make it extend a Exception class.
	
```java
Example: 
public class ClassNameException extends Exception {}
```

- **Step 2:** Make a constructor of the class with a `String` argument and call super constructor inside it passing the argument.

```java
Example: 
public class ClassNameException extends Exception {
	ClassNameException(String mssg){
		super(mssg); 
	}
}
```

- Now we can use the *ClassNameException* Exception class where ever we need it.
- _`Example:`_
```java
import java.io.*;

public class CustomException extends Exception {
    CustomException(String message){
        super(message);
    }
}

public class Demo {
    public static void main(String [], args){
        try{
            throw CustomException("Custom Exception");
        }catch(CustomException e){
            System.out.println(e);
        }
    }
}
```

## 3b

### What are the difference between applet and normal java program? Create an applet with the functionalities to play, stop and repeat the audio.

|**Applet**|**Java Program**|
|-----|---|
|They are the java program that runs on a browser.|They are the java program that runs on a Java runtime environment.|
|They don't need a main method to start the program.|They need a main method to start the program.|
|They need HTML file as they run on browser.|They don't need a HTML file.|

[Create Applet program to play audio file](https://github.com/Alson33/All_Code_Subject_Notes/blob/master/3rd-Semester/JAVA/Old_Questions/2018-spring/AudioDemo.java)

```java
import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class AudioDemo extends Applet implements ActionListener {
   
   Button play, stop;
   AudioClip audioClip;
   
   public void init() {
      play = new Button("Play in Loop");
      add(play);
      play.addActionListener(this);
      stop = new Button("Stop");
      add(stop);
      stop.addActionListener(this);
      audioClip = getAudioClip(getCodeBase(), "fileName.wav");
   }
   public void actionPerformed(ActionEvent ae) {
      Button source = (Button)ae.getSource();
      if (source.getLabel() == "Play in Loop") {
         audioClip.play();
      } else if(source.getLabel() == "Stop"){
         audioClip.stop();
      }
   }
}
```

##  4a,

### Create swing GUI that have a textfield and a button which when clicked changes the text inside the texfield into uppercase and changes the background color of the textfield.

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
        tf.setBackground(Color.BLUE);
    }

    public static void main(String [], args){
        new Demo();
    }
}
```

## 4b

### Demonstrate various drawing methods. How do you create, load and display image?

- `drawLine(starting x, starting y, ending x, ending y);` **to draw a line.**
- `drawRect(starting x, starting y, width, height);` **to draw a Rectangle.**
- `fillRect(starting x, starting y, width, height);` **to draw a Rectangle filled with selected color.**
- `fillOval(starting x, starting y, x-radius, y-radius);` **to draw a Oval filled with selected color.**
- `drawPolygon(array of x-cor, array of y-cor, number of points in polygon);` **to draw a polygon with some numbers of points**
- `fillPolygon(array of x-cor, array of y-cor, number of points in polygon);` **to draw and fill a polygon with some numbers of points**
- `drawString("string", x-cor, y-cor);` **to draw a string at x-cor and y-cor given**

```java
import java.awt.*;
import java.awt.event.*;

public class ImageDemo extends Frame {
    
    Image image;

    public static void main(String[] args) {
        new ImageDemo();
    }

    ImageDemo(){
        setSize(300, 300);
        setVisible(true);
    }

    public void paint(Graphics g){
        Toolkit tool = Toolkit.getDefaultToolkit();
        image = tool.getImage("fileName.jpg");
        g.drawImage(image, 20, 45, this);
    }
}
```

##  5a

### Difference Between TCP and UDP sockets. Explain InetAddress class.

|**TCP**|**UDP**|
|---|---|
|*TCP* Stands for Transmission Control Protocal.|*UDP* Stands for User Datagram Protocal.|
|It is a connection oriented protocal.(*i.e the communication device should establish connection before and after transmitting data*)|It is a Datagram oriented protocal(*i.e there is no overhead for opening a connection.*)|
|It is more reliable as it makes sure the delivery of data is done.|It is less reliable as it doesn't make sure of the delivery.|
|It provides extensive error handling mechanism.|It provides only basic error checking mechanism.|
|It is slower than UDP.|It is faster than TCP.|
|It is used by HTTP, FTP, etc.|It is used by DNS, TFTP, etc.|
|TCP has a (20-80) bytes variable length.|UDP has a 8 byte fixed length header.|

- It represents an IP address. It can convert domain name to IP address and also it can perform DNS lookup.
- Some methods of *InetAddress class* are: 
	- `public String getHostName();`
	- `public String getHostNameAddress();`
	- `String toString();`

## 5b

### What are some key classes defined in java to work with datagrams? How do you get a list of IP addresses that are assigned to a network interface?

- `DatagramSocket class`:  This class is used for sending and receiving datagram packets.
- `DatagramPacket class`: This class helps in defining a message for sending and receiving during datagram communication.

```java
import java.net.*;
 
public class GetIpAddress {
 
    public static void main(String[] args) throws UnknownHostException {
 
        String url = "www.google.com";

        // print all the IP Addresses that are assigned to a certain domain
        InetAddress[] inetAddresses = InetAddress.getAllByName(url);
 
        for (InetAddress ipAddress : inetAddresses) {
            System.out.println(ipAddress);
        }
    }
}
```

##  6a

### What is the benefits of using prepared Statement in java? What is JDBC database connection pool? How to setup in java?

-   Easy to insert parameters into the SQL statement.
-   Easy to reuse the  `PreparedStatement`  with new parameter values.
-   May increase performance of executed statements.
-   Enables easier batch updates.

- Connection pooling means that connections are reused rather than created each time a connection is requested.
- It helps to improve the performance of the program.
- In JDBC a memory chace of database connections called connection pool is maintained by a conncetion pooling module as a layer on top of any standard JDBC driver product.

```java
import java.sql.*;

public class ConnectionPoolDemo {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
        
        //STEP 1: Setting up Mysql Driver class
        Class.forName("com.mysql.cj.jdbc.Driver");
        
        //STEP 2: Connecting the Driver class to the database
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");
        //testdb = database name
	}

}
```

## 6b,

### A database "testdb" contains a table "employee" with some records having id, name, post, salary. Write a program to update the salary to 50000 whose post is "Manager".

```java
import java.sql.*;

public class UpdateJDBCDemo {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
	
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");
		
		Statement st = con.createStatement();
		
		String sql = "UPDATE employee set salary=50000 where post='Manager'";
		
		st.executeUpdate(sql);
	}

}
```

## 7a, Inner Class

- A inner class or nested class is a class which is declared inside a class or interface.
- We use it to logically group classes and interfaces in one place so that it can be more readable and maintainable.
- **It can also access all the members of its outer class including private data members and methods.**

## 7b, C++ Vs Java

|C++|Java|
|--|--|
|The concept of `friend class and friend function` is used.|The concept of `friend` is not used.|
|Multiple inheritance is supported.|Multiple inheritance is only supported through interface.|

## 7c, Types of JDBC drivers

- **Type 1:** JDBC-ODBC driver.
	- In this type of driver, a JDBC bridge is used to access ODBC drivers installed on each client machine.
- **Type 2:** JDBC-Native API
	- In this type of driver, JDBC API calls are converted into native C/C++ API calls, which are unique to the database.
- **Type 3:** JDBC-Net pure Java
	- In this type of driver, a three-tier approach is used to access databases. The JDBC clients use standard network sockets to communicate with a middleware application server. The socket information is then translated by the middleware application server into the call format required by the DBMS, and forwarded to the database server.
- **Type 4:** 100% Pure Java
	- In this type of driver, a pure Java-based driver communicates directly with the vendor's database through socket connection.
