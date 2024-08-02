# 2014-Spring

## 1a

### What do you mean by Java System Overview? Explain why Java program are Known as portable and architecture neutral.

- Definition

[2016-Spring#1a]()

- Histroy

[2018-Fall#7]()

- Features

[Architecherul-neutral 2018-Spring#1a]()

[Reusability 2016-Fall#1a]()

[More Secure 2013-Fall#1a]()

## 1b

### Difference between package and interface in Java. Provide example for each of them.

|**Package**|**Interface**|
|--|--|
|It is a pack or group of class, interface that allows for easier reusablility.|It is a special type of class where there is no data member and only abstract methods.|
|`package` keyword is used to make a package.|`interface` keyword is used to make a Interface.|
|`import` keyword is used to import the package.|`implements` keyword is used to implement the interface.|
|**Syntax:** `package package_name;`|**Syntax:** `interface Interface_name {}`|

## 2a

### Implement an abstract class named Person and two subclasses amed Student and Employee in Java. A person has a name, address, phone number and e-mail address. A student has a class status(freshman, sophomore, junior or senior). Define the status as a constant. An employee has an office, salary and date-hired. Implement the above classes in Java. Provide Constructors for classes to initialize provate vaiables. Override the toString method in each class to display the class name and the person's name. Write an application to create objects of type Student and Employee and print the person's name and the class name of the objects.

[Solution]()

## 2b

### Why do we need to Serialze an object? Write a program to read numbers from console using Input Stream. Also apply the method of object serialization in your program.

- Serialization is a mechanism for storing an object's states into a persistent Storage like disk file databases or sending objects state over the network.
- We need to serialize and object because the hard disk or network infrastructure are hardware componenets and cannot send java object to it, as it understands just byte and serialization translate the java object satte into byte.

[Read String from console 2015-fall]()

## 3a

### How can HTML file pass data to an applet? Explain with relevant code tags.

[2016-Fall#3b]()

## 3b

### Write an applet program with three textfields with the following names:
### "number1", "number2" and "result". When the user clicks a "sum" button then the sum of the two numbers in "number1" and "number2" should be displayed in the textfield named "result"

[Applet Program Solution]()

## 3c

### Differentaite between Gridbag Layout and Grid Layout

## 4a

### What are Heavyweight components in Java? Are there any alternatives to those heavyweight components? Provide a comparative illustration.

- The Components that have its own native screen resource(commonly known as peer) are called HeavyWeight components.
- The Components from `AWT` like button, textfield, etc are examples of heavyweight components.

>Alternative to HeavyWeight components

- The Componenets that does not have its own native screen are called lightweight components.
- The Components from `Swing` like JButton, JTextfield, etc are the examples of lightweight components.

## 4b

### Write a program to draw a Barchart of Number of students giving exam for Java, C and C++.

[Solution]()

## 5a

### Difference between URL and URL connection class with relevant examples.

|**URL class**|**URL connection class**|
|--|--|
|It represents an URL.|It represents a communication link between URL and application.|
|`URL` class is used to make an URL object.|`URLConnection` class is used to make an URL connection object.|
|`getProtocal()`, `getHost()`, etc are used to get the data of the URL.|`getInputStream()` method is used to read all the data of the webpage.|

## 5b

### Discuss the process of creation of Server-client sockets with eception handled explicitly with a suitable example.

[2016-Fall]()

## 6a

### What do you mean by JDBC Drivers? Write short notes about:
### i, JBDC-ODBC Bridge
### ii, Java native Driver

[2018-Spring#7]()

## 6b

### Write a simple java Program to connect ms access database and insert data in the table named "Student" which have four fields named "id", "name", "address", "DOB", and "Class".

[Database insertion program solution]()

## 7a, Dialog Box

[2018-Fall#3a]()

## 7b, Closable Frames

[2016-Fall#7]()

## 7c, Inner Class

[2018-Spring#7]()