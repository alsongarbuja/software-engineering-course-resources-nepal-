# Lab 5

## Objective

- To create Circular Buffer using array in java

## Theory

- Circular buffer is a First In First Out based memory storage used to store temporary data bits inorder to access the data faster during execution.
- It is normally located at RAM which is faster to access data from than hard disk of the system.
- It uses the concept of circular queue where we have one tail index from where the data is deleted and one head index from where data is inserted.
- Some example of circular buffer is during the video transmission in video calls and live video feeds where the data bits are stored in a buffer storage before sending it to the screen of users.

## Code

[here](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab5/CircularBuffer.java)

## Output

```
Buffer is empty
Added item 90 at 0 index in the buffer
Added item 30 at 1 index in the buffer
Added item 50 at 2 index in the buffer
Buffer is Full. Cannot add item: 60
Removed item 90 from 0 index in the buffer
Added item 100 at 0 index in the buffer

Item in index 0 : 100
Item in index 1 : 30
Item in index 2 : 50
```