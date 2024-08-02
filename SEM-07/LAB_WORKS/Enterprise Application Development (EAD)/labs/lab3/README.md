# Lab 3

## Objective

- Create an example of `Factory Design Pattern`
- Use Factory design pattern in Java


## Theory

- `Factory Design Pattern` is a type of Design pattern that involves creating a class called as **Factory Class** that is responsible for creating objects of certain types of class.
- This is a type of creational design pattern as it provides a way to create new objects without having the client to know about the creation logic and refer to the newly created object as common interface.

## Steps

- Create an `Interface` called *`Building`* with an abstract method called `createBuilding()`
- Create `solid classes` *(any number, for this lab 3 classes)* called *`Palace`*, *`TentHouse`*, *`TreeHouse`* that implements the *`Building`* `Interface`.
- Override the `createBuilding()` methods in each classes.
- Create a Factory class called *`BuildingFactory`* with a method called `build()` with a `String` parameter and return type of `Building`.
- Inside the `build()` method check for the parameter and return the correct class object else return `null`
- Finally create a class that will have the `main()` function and inside that create an object of *`BuildingFactory`* class then create objects of different types of building as:

```java
// inside main method
BuildingFactory buildingFactory = new BuildingFactory();

Building palace = buildingFactory.build("PALACE");
palace.createBuilding();

Building treeHouse = buildingFactory.build("TREE");
treeHouse.createBuilding();

Building tentHouse = buildingFactory.build("TENT");
tentHouse.createBuilding();
```

## Steps to run the program

```
javac <filename>.java

java <filename>
```

## Output

```
Creating a palace.....
Creating a tree house.....
Creating a tent house.....
```