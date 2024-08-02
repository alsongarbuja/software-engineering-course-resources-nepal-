# Lab 2

## Objective

- Create an example of `Singleton Design Pattern`
- Use Singleton design pattern in Java


## Theory

- `Singleton Design Pattern` is a type of Design pattern that involves creating an object of a class only once.
- This is a type of creational design pattern as it provides a way to create new object of a class only once and reuse that same object again and again.

## Steps

- Create an `Class` called *`Singleton`* with a private constructor and a getter called *`getInstance`*
- Initialize an object of the *`Singleton`* class as a private static variable.
- Return the object created through the *`getInstance`* getter function.

```java
// inside main method
Singleton test1 = Singleton.getInstance();
Singleton test2 = Singleton.getInstance();

// to test if the object created is same or not
System.out.println(test1.hashCode());
System.out.println(test2.hashCode());
```

## Steps to run the program

```
javac <filename>.java

java <filename>
```

## Output

```
918221580
918221580
```