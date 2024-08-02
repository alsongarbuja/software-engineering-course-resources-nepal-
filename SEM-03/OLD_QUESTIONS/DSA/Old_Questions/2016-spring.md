# 2016-Spring

## 1a

### Differentiate between data types and data structure. What are the two parts of ADT definition?Explain.

## 1b

### Difference between infix, prefix and postfix expression. Write an algorithm to evaluate an arithmetic expression in Postfix string.

|Infix expression|Prefix expression|Postfix expression|
|--|--|--|
|The expression in which the operators are in between the operands is called infix expression.|The expression in which the operators are ahead of the operands is called prefix expression.|The expression in which the operators are after the operands is called postfix expression.|
|`<operand><operator><operand>` syntax is followed.|`<operator><operand><operand>` syntax is followed.|`<operand><operand><operator>` syntax is followed.|
|It is easy to understand by humans.|It is easy to understand by computers.|It is easy to understand by computers.|
|The expression consists of brackets.|The expression doesn’t consist of brackets.|The expression doesn’t consist of brackets.|
|It is also called an arithmetic expression.|It is called polish notation.|It is called reverse polish notation.|

```js
Alogithm to evaluate postfix expression

Step 1: Initialize a empty stack
Step 2: Read the characters from left to right one by one
        If ( the character is operand ) Push to the stack
        If ( the character is operator ) Pop the top two operands from the stack and do the operation (B operator A) and push the result back to the stack.
Step 3: Repeat step 2 until all the characters are read.
Step 4: End.
```

## 2a

### Define Circular queue. Write an algorithm to add and delete an item in the circular queue.

- A circular queue is one type of queue where the last location of the queue ( `i.e if we have n size queue` ) then nth location is connected back to the first location. 
- It overcomes the problem of unutilized space of linear queue by adding a new data to the queue at the place from where a data was deleted.

```js
**Adding item to a circular queue/Enqueue**

Initialize front and rear as 0 and an array Q[]

Step 1: Start
Step 2: if (front == (rear+1)%max)
    print error "Circular queue overflow"
Step 3: else
    {rear = (rear+1)%max
    Q[rear] = element;
    if(front == -1) f=0;
    }
Step 4: stop	 	  
```

```js
**Deleting item from circular queue/Dequeue**

Initialize element = 0 

Step 1: Start
Step 2: If((front == rear) && (rear == -1))
    print error "circular queue underflow"
Step 3: else
    { element = Q[front]
        If(front == rear) front=rear=-1
        Else
        front = (front+1)%max
    } 
Step 4: End
```

## 2b

### List basic five operations of linked list. Write code for inserting new node at the begining of the list.

- 

## 3a

### What are the advantage and disadvantage of linked list implementation over array implementation? Write algorithm for enqueue and dequeue operations on Queue using linked list.

## 3b

### Expain B+ trees giving some of its application. Write algorithm to delete an element from B+ tree.

## 4a

### Mention advantage and disadvantage of recursive algorithms over iterative solutions.

## 4b

### Trace quick sort algorithm for the data: 10,22,31,4,15,28,17,6

- Quick sort is a kind of `divide and conqure` sorting algorithm. 
- First we initialize a temporary table and take a `pivot` element say `10`
- Comparing `10` with every other elements and if pivot element is greater than the compared element(`i.e 10 > x[comparing element]`). Push to the table
    4,6
- Now push `10` to the table, followed by remaining elements.
    4,6,`10`,22,31,15,28,17
- Here the list has been divided into two sublists left sublist having element lesser than pivot element and right sublist having element greater than pivot element.
- Now we apply the same algorithm to both sub lists until sorted list is found.
- Take `4` as pivot in sublist~less~ and `22` as pivot in sublist~greater~ [Where sublist~less~ = left sublist and sublist~greater~ = right sublist]
    - In sublist~less~ we will have `4`,6 resulting table
    - In sublist~greater~ we will have 15,17,`22`,31,28 resulting table
- Total list = (`4,6,10,15,17,22,31,28`)
- Since there is only `6` in the sublist~greater~ of (4,6) list so we can say they are sorted.
- For sublist~less~(15,17) taking `15` as pivot element, resulting table = `15`,17
- For sublist~greater(31,28) taking `31` as pivot element, resulting table = 28,`31`
- Total list = (`4,6,10,15,17,22,28,31`)
- Here only `17` and `28` is left in sublist(15,17) and (28, 31) respectively so we can say they are also sorted.
- Then the final sorted table will be **`4,6,10,15,17,22,28,31`**

## 5a

### Discuss the efficiency of binary searching.

## 5b

### Define hashing and collision. Illustrate three types of collision resolution techniques with an example.

- Hashing is the process of making tables or lists of data using hash functions that convert the given key into smaller key that is used for indexing the table.
- A situation in which a newly inserted data maps to an already occupied slot in the table is called collision hashing

- The three types of collision resolution techniques are:-
    1. Open hashing (Separate Chaning)
        - It is the method in which each cell of the table where collision occurs points to a linked list.
        - It is used mostly when we don’t know the number of datas to be inserted or deleted.
    1. Linear Probing
        - It is the method in which probing (Searching for next empty slot) is linear.
        - Clustering occurs while using this method as more collision occurs.
    1. Double hashing
        - It is the method in which a second hashing function is done for the same key.
        - Clustering is not encountered but time for 2 hashing functions is more.
- `Example: Let's say we have a .. () as we `//TODO

## 6a

### Differentiate between graph and trees. Write an algorithm for Depth First Traversal of graph.

## 6b

### What is minimum spanning tree? Explain Kruskal's algorithm to get minimum cost spanning tree of following graph.

//Graph TODO

## 7a, Priority Queue

- Priority Queue is a collection of element such that each element has been assigned a priority and such that the order in which element are processed and deleted from follows the rules as:-
- An element with higher priority is processed before any elements of lower priority.
- Two elements with same priority are processed according to the order in which they are added to the queue.
- It can be of two types:-
    - Ascending priority queue
    - Descending priority queue

## 7b, Mean vs Max Heap

- Heap is a special type of complete binary tree in which the values of the parent node are compared with the values in its children nodes.There are two types of heap, they are:-
    - **Min heap** is a type of heap in which the value of the parent node must be less than or equal to the values of its children nodes.
    - **Max heap** is a type of heap in which the value of the parent node must be greater than or equal to the values of its children nodes.

## 7c, Big O notation