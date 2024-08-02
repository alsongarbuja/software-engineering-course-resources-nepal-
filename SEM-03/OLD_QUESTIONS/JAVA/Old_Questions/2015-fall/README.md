# 2015-Fall

## 1a

### What is a Class file? Differentiate between assignment and initialize with suitable example.

- A java class file is a file containing java `bytecode` and having `.class` extension that ican be executed by the JVM.
- A java class is created by java compiler from `.java` files as a result of successful compilation.
- A single java source file may contain one or more than one class. So if a java file has more than one class then each class will compile into a separate class file.

>Difference Between assignment and initailization

|**Assigment**|**Initailization**|
|--|--|
|It is the process of replacing old values of a variable with new one.|It is the process of assigning the variable a value for the first time.|
|Before assignment objects or variable may have null, 0, false or any other values.|Before initailization objects or variable may have null,0,or false.|
|Example: int num=3; num = 9;//assigment|Example: int num = 2;//initailization|

## 1b

### Difference between abstract class and interface in java. Provide examples for each of them.

[2011-Fall#1b]()

## 2a

### Implement an abstract class named Book and two subclasses named Novel and Magazine. A Book has a name, author, total page and publisher. Book have an abstract method called getBookType(). Novel and Magazine have field to determine their type. Implement the above classes in Java. Provide Constructors for classes to initialize private varibales.
### Write an application to create objects of type Novel and Magazine and invoke the methods in them.

[Solution abstract class]()

## 2b

### What are exception? Write a  program to read a string from the console and display it in the console.

[2016-Spring#3a]()

[Solution to read string from console and print it in the console.]()

## 3a

### Difference between applet and application. Can we convert an application to applet? Explain with an example.

[2018-spring#3b]()

## 3b

### Write a program to create a frame in swing. The frame should contain three textfields with labels arg1, arg2 and result respectively, a menu called file with sub menus add, subtract and close.

[Solution of the frame question]()

## 4a

### Explain any 5 event listener in java with methods

- A Listener is an object that is notified when an event occurs.
- a.k.a Event Handler. (also known as)
- Listener is responsible for generating response to an event.
- It has two major requirements:
    - First, it must have been registered with one or more source to receive notifications about specific types of events.
    - It must implement methods to receive and process these notifications.

- **Action Listener:** Defines one method to receive actions events.
    - Methods `void actionPerformed(ActionEvet ae)`

- **Adjustment Listener:** Defines one methods to receive adjustment events.
    - Methods `void adjustmentValueChanged(AdjustmentEvent ae)`

- **Component Listener:** Defines 4 methods to recognize when a component is hidden , moved , resized or shown.
    - Methods
        - `void componentResized(ComponentEvent ce)`
        - `void componentMoved(ComponentEvent ce)`
        - `void componentShown(ComponentEvent ce)`
        - `void componentHidden(ComponentEvent ce)`

- **Item Listener:** Defines 1 method to recognize when the state of an item changes
    - Methods `void itemStateChange(ItemEvent ie)`

- **Mouse Listener:** Defines 5 methods to recognize when the mouse is clicked, enters a component, exits component, is pressed, is released.
    - Methods
        - `void mouseClicked(MouseEvent me)`
        - `void mouseEntered(MouseEvent me)`
        - `void mouseExited(MouseEvent me)`
        - `void mousePressed(MouseEvent me)`
        - `void mouseReleased(MouseEvent me)`

## 4b

### Explain the relation of repaint() method with update() and paint(). Write a program showing the working of repaint() method.

[2015-Spring#7]()

## 5a

### Write a program to connect to a database using JDBC. Assume that database name is test_Db and it has table named employee with 2 records.

[Solution at 2018-Fall]()

## 5b

### Explain different types of JDBC driver

[2018-Spring#7]()

## 6a

### Write a simple java program of TCP client and Server communication with exceptions handled.

[communication program at 2016-Fall]()

## 6b

### Write about: Socket, port IP Address and URL in java

[2016-Fall#5a]()

>Port

- Port is a number used to uniquely identify different applications.
- It acts as a communication endpoint between applications.
- It is associated with the IP address for communicaton between 2 applications.

>Ip Address

- Ip address is a 32-bit number(IPv4 format) often represented as a quad of four 8-bit numbers separated by periods also known as dotted decimal notation.
- It has a range of 0.0.0.0 - 255.255.255.255

>URL

[2014-Spring#5a]()

## 7a, Benifits of Java

- More Secure than other OOP langauge.
- Features like package, etc making its code reusable easy.
- Its platform independent. So, easy to transport code.
- Fully object oriented yet easy to learn.

## 7b, Reflection in Java

[2011-Fall#2b]()

 ## 7c, Graphics object

[2013-fall#7]()