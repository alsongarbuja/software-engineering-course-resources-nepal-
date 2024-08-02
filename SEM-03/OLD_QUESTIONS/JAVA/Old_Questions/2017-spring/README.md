# 2017-spring

## 1a

### Define Java as platform independent programming language.

[2018-spring#1a]()

## 1b

### What is Constructor. Explain with example?

- **Constructor** is a special type of method in a class that is initailized whenever a object of that class is initiated.
- It has same name as the class name.
- It doesnot have any return type not even void.
- There are 3 types of constructor in java
    - `Default`
    - `Parameterized`
    - `object`
- *Deafult Constructor* is automatically made by java when no constructor is explicitly defined.

```java
public class ConstructorDemo {
    int num;

    ConstructorDemo(){
        System.out.println("1, Default Constructor");
    }

    ConstructorDemo(int num){
        this.num = num;
        System.out.println(this.num+", Parameterized Constructor");
    }

    ConstructorDemo(ConstructorDemo obj){
        this.num = obj.num;
        System.out.println((this.num+1)+", Object Constructor");
    }

    public static void main(String [] args){
        new ConstructorDemo();
        ConstructorDemo ob1 = new ConstructorDemo(2);
        ConstructorDemo ob2 = new ConstructorDemo(ob1);
    }
}
```

## 2a

### Write a program to show the usage of various data types in java.

>Data Types in java

- Data Types are the types of data that can be used in making variables and objects in programming.
- There are 8 main primitive type of `Data Types` in Java:-
    - byte
    - short
    - int
    - long
    - float
    - char
    - boolean
    - double

[Data types in java example]()

## 2b

### Define Inheritance. write a program which has two classes A and B, where A should act as Parent class and B should inherit from A.

[2016-Spring#7]()

```java
public class A {
    public void mssgFromA(){
        System.out.println("This is class A");
    }
}

public class B extends A {
    public void mssgFromB(){
        System.out.println("This is class A");
    }

    public static void main(String [] args){
        B obj = new B();

        obj.mssgFromA();
        obj.mssgFromB();
    }
}
```

## 3a

### Define Exception handling with Example.

[2016-Spring#3a]()

## 3b

### Create a Frame which has three textfield and one button. When user clicks on button it should calculate sum of value of first and second textfield and display on third textfield.

[Solution 2018-fall#SumandDiffDemo]()

## 4a

### What is difference between interface and class? Explain with an example.

|**Interface**|**Class**|
|--|--|
|It is a special type of class in which there are no data members and all the methods are decleared without body.|It is a data type that contains other data members and methods.|
|`interface` keyword is used to make a Interface.|`class` Keyword is used to make a Class.|
|Full `Abstraction` is obtained.|Some `Abstraction` is obtained using scope modifiers.|
|Multiple inheritance is supported.|Multiple inheritance is not supported.|

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

```java
class Demo {
    public void dis(){
        System.out.println("This is a normal class");
    }

    public static void main(String [] args){
        Demo ob = new Demo();

        ob.dis();
    }
}
```

## 4b

### Write a program to read content from file "abc.txt" and store it in "xyz.txt".

[Read content from abc.txt file and store in xyz.txt file]()

## 5a

### What are Applets? Define applet life cycle with example.

[2016-spring#4a]()

## 5b

### Write a program to send "Message from Pokhara University" from client to server using java socket programming.

```java
// Client side
import java.net.*;
import java.io.*;

public class ClientSide {
    public static void main(String [] args){
        try {
        
        Socket s = new Socket("localhost", 3333);

        DataOutputStream dout = new DataOutputStream(s.getOutputStream());

        dout.writeUTF("Message From Pokhara University");
        dout.close();
        s.close();

        }catch(Exception e){
            System.out.println(e);
        }
    }
}
```

```java
// Server side
import java.net.*;
import java.io.*;

public class ServerSide {
    public static void main(String [] args){
        try {
            
            SocketServer ss = new SocketServer(3333);
            Socket s = ss.accept();

            DataInputStream din = new DataInputStream(s.getInputStream());

            System.out.println("Client says: " + din.readUTF());

            din.close();
            s.close();
            ss.close();

        }catch(Exception e){
            System.out.println(e);
        }
    }
}
```

## 6a

### Define JDBC. Write a program to update data on following table
### Table: student
###         Column:
###         NAME TYPE
###         id   number
###         name varchar
###         age  number

```java
import java.sql.*;

public class UpdateDemo {
    public static void main(String [] args) throws ClassNotFoundException, SQLException{
        Class.forName("com.mysql.cj.jdbc.Driver");

        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb", "root", "");

        Statement st = con.createStatement();

        String update = "Update student set age=20, name='Alson' where id=2";

        int num = st.executeUpdate(update);

        System.out.println(num+" rows updated");
    }
}
```

## 6b

### Difference Between Frame and Swing?

|**Frame/AWT**|**JFrame/Swing**|
|--|--|
|AWT stands for Abstract Windows Toolkit.|Swing is also called as JFC(Java Foundation Classes)|
|AWT components are called Heavyweight component.|Swing components are called Lightwieght components.|
|We use `java.awt` package.|We use `javax.swing` package.|
|They are platform dependent.|They are platform independent.|
|AWT is a thin layer of code on top of the OS.|Swing is much larger and also has very richer functionality.|

## 7a, JRE

- JRE(Java Runtime Environment) is a software that makes an environment for java programs to run without having to contact with the compiler of OS.
- It is used to create class file from a java source code(.java file).
- The class file contains the bytecode which is converted to an executable file using JVM.

## 7a, Event handling

## 7c, Result Set

- ResultSet is the java objaect that contains the result of executing SQL query. 
- In othet words it contains the rows that satisfy the conditions of the query.
- The data stored in the resultset object is retirved through a set of get methods that allows access to the various columns of the current row.