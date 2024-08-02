# 2011 - FALL

[1a](#1a) | [1b](#1b) | [2a](#2a) | [2b](#2b) | [3a](#3a) | [3b](#3b) | [41](#41) | [4b](#4b) | [5a](#5a) | [5b](#5b) | [6a](#6a) | [6b](#6b) | [7](#7)

## 1a, JVM is used for:- 

- JVM (Java Virtual Machine) is a interpreter that converts the Byte Code into machine-readble code.
- It is used to run the java files in the OS(Operating System).
- Whenever we install JDK, the corresponding JVM is installed making java a platform independent language.
- As we know java has a feature write onces which means we have to write the java code only once and it will run on any platform, any OS. It is possible because of the JVM.
- By downloading the corresponding JVM it will automatically convert the byte code to the platform specific machine readable code, hence having to write the actual java code only once.

### JRE :-

- JRE (Java Runtime Environment) is a software used to run Java system inside a OS.
- It consists of Java class libraries, JVM, Java class loader.
- It is a example of `abstraction`, abstracting the underlying OS into a consistent platform for running Java applications.

## 1b, Uses of package:-

- Package in Java are constraints for classes.
- It allows to create a class named ABC(for example), which you can store in one package and have a class named ABC in another package without worring about colliding.
- It also makes the project structure clean and managable as we can group classes that have comman properties in a package while also using them in other packages.
- To make a package use the package command as the first statement in the java file.

Syntax:

```java
package package_name; // where package_name is the folder name usually
```

- To use a class from a package use import command in the required file.

Syntax:

```java
import packge_name.ClassName;
```

### Difference between interface and abstract classes:-

|**Interface**|**Abstract**|
|-------------|------------|
|It is a special type of class that doesnot have any data members and have only abstract methods.|It is a special type of class that does not have any data members but can have abstract methods and normal methods.|
|`interface` keyword is used to define it.|`abstract` keyword is used to define it.|
|Multiple inheritance is supported.|Multiple inhheritance is not supported.|
|It provides full absrtaction.|It provides some extend of abstraction.|
|It cannot have any normal methods.|It can have normal methods.|

## 2a,

[Interface Solution]()

## 2b, Reflection API

- Reflection API is an API which is used to examine or modify the behavior of methods, classes, interfaces at runtime.
- Uses of Reflection API are:-
    - **Extensibility Features:** An application may make use of external, user-defined classes by creating instances of extensibility objects using their fully-qualified names.
    - **Debugging and testing tools:** Debuggers use the property of reflection to examine private members on classes.
- Disadvantage:-
    - **Performance Overhead:** Reflective operations have slower performance than their non-reflective counterparts, and should be avoided in sections of code which are called frequently in performance-sensitive applications.
    - **Exposure of Internals:** Reflective code breaks abstractions and therefore may change behavior with upgrades of the platform.

## 3a,

[Solution]() // TODO


## 3b, Security restrictions of applet:-

- An applet cannot load libraries or define native methods.
- An applet cannot ordinarily read or write files on the execution host.
- An applet cannot read certain system properties.
- An applet cannot make network connections except to the host that it come from.

### Attributes of applet tag are:-

- **CODEBASE:** It is an optional attribute that specifies the bse URL of the applet code.
- **CODE:** It is a required attribute that gives the file name that contains the compiled file(.class file).
- **ALT:** It is the attribute used by the browser when it recognizes the applet tag but cannot run JAVA applet at the moment.
- **VSPACE:** This attribute is used to determine the space on top and below the applet.
- **HSPACE:** This attribute is used to determine the space on each sides of the applet.

## 4a,

[Difference between applet and java program/application](https://github.com/Alson33/All_Code_Subject_Notes/blob/master/3rd-Semester/JAVA/Old_Questions/2018-spring#3b)

[Image in a applet]()

[sound in a applet](https://github.com/Alson33/All_Code_Subject_Notes/blob/master/3rd-Semester/JAVA/Old_Questions/2018-spring/AudioDemo.java)

## 4b,

[Explanation with Example]() // TODO

## 5a,

[Menubar solution]()

## 5b, Multicasting

- Multicasting is a model that allows the same event listener to be reacted by several event sources and vice versa.

### Layout Manager classes (explain any two)

- FlowLayout
    - Arranges components like words on a page - From left to right in rows and then top to bottom as each row fills up.
    - Some of the constructors are FlowLayout(), FlowLayout(int align), etc.
- BorderLayout
- GridLayout
    - A container using the GridLayout scheme arranges components in rows and colums in row major order. Each component is sized to fit its respective grid cell.
    - Some of the constructors are GridLayout(), GridLayout(int rows, int cols), etc.
- CardLayout
- GridBagLayout

## 6a,

[Closable Frame]()

## 6b,

[Cirlce inside rectangle with text in times new roman]()

## 7, Static member variable

- Static member variable are a kind of variable that has only one refrence for all the objects of the class.
- It is a classess variable, i.e it is same for all the objects of that class.
- `static` keyword is used to create a static member variable.
- If one object of the class changes the value of the static member then when displying value of that variable with another object will show the changed value.
- If a class have only static methods then the class can be used directly without creating any object of that class to access those methods. Example: `In Collection.sort(list), Collection class have all static methods only one of which is sort() so we don't have to make a object of Collection class to access the sort() method`

### Swing

- Swing is a GUI toolkit for java window based application.
- It is built on top of `AWT` API.
- It provides components that are lightweight and platform independent unlike `AWT`.
- It has much more components then AWT and have richer functionalities.
- We use `Javax.swing` package in order to use swing components.
- It is much like AWT and can use the AWT components with a J infront of the Classes. Example: `JFrame, JButton, etc`
