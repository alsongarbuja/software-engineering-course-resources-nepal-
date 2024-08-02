# 2013-Fall

## 1a

### How Java is more secure than other programming language? Explain.

## 1b

### Write a java program to generate the following triangle using for loop.
### 1
### 0 1
### 1 0 1
### 0 1 0 1

[traingle program]()

## 1c

### Explain the uses of super and this keyword with suitable example.

## 2a

### What are the significant uses of interface? Explain how it is implemented in java.

## 2b

### Write a function that takes an array of integers as an argument and returns the sum of even numbers in that array.

[Solution]()

## 3a

### Explain User defined execption with suitable java code.

[2018-spring#3a]()

## 3b

### What is a User defined package? Illustrate the process of defining and using define package with suitable example.

- A `package` is a pack or group of classes, interfaces and other packages.
- It is a constraint for classes.
- User defined package are those package which are defined by users/programmers.
- We can make a user defined package by using `package` keyword at the start of the file along with package_name.
- And use that package by using `import` keyword along with the package_name.ClassName at the top of needed file.

Example:

```java
package MyPack; // Mypack:- package_name which is usually folder_name

public class ClassName {
    //......
}

//----------------------
// importing the package,
// we use MyPack.*; if we want to import all classes in MyPack.

import MyPack.ClassName;

class DemoClass extends ClassName {
    //......
}
```

## 4a

### What is an Applet? Write an applet program to play an audio file. The name of audio file is supplied from HTML tag.

[ applet related question in 2016-Spring#4a]()

[audio file in 2018-spring]()

## 4b

### What is an event? Briefly explain the models avialable for event handling

## 5a

### Write down the significant uses of URL and URL connection classes.

[2014-spring#5a]()

## 5b

### What is the difference between TCP/IP Programming and Datagram Programming? Briefly explain the Classes and Methods that are used to create a TCP/IP Server application.

[2018-spring#5a]()

## 6a 

### What are the steps involved for making a connection with a database. Write a Java program to extract and display the information in console from ABC table of Ms-access with suitable values. The ABC table has AAA and BBB fields.

[Solution at 2014-spring]()

## 6b

## Define JDBC and ODBC. Briefly ecplain the different types of JDBC driver.

- JDBC(Java Database Connectivity) is an Application Programming InterFace(API) for the langauge Java which defines how a client may access a database.
- It is a java based access technology used for java database.

- ODBC(Open Database Connectivity) is a standard Application Programming InterFace(API) for accessing Database Managment Systems(DBMS).
- It is  database system and operating system independent API.
- The application written in ODBC can be ported to other platforms both on client and server side with few changes to the data access code.

[2018-Spring#7]()

## 7a, Dynamic Dispatching

- Dynamic Dispatching means `runtime polymorphism`.

## 7b, Layout Management

- Layout manager/management are the objects that are used to arrange components in a particular manner.
- `LayoutManager` is an interface that is implemented by all classes of layout manager.
- Some of the layout available in Java are:-
    - FlowLayout
    - BorderLayout
    - GridLayout
    - GridBagLayout

## 7c, Graphics object

- Graphic object represents a GDI+drawing surface and is the object that is used to create graphical images.
- We can use the method of the `Graphic class` with Graphic object to draw lines and shapes, render text, display or manipulate image.
- Syntax: `Graphics object_name = new Graphics();`
