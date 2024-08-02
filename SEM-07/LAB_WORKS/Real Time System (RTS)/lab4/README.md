# Lab 4

## Objective

- To create a Fastest deadline first in java

## Theory

- Scheduling is the process of dividing execution time for the processes that are coming in the CPU to execute in an order.
- Fastest deadline first scheduling is the scheduling in which the process with the fastest deadline which means the smallest execution period and fastest arrival time is executed first.

## Code

[here](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab4/FastestDeadline.java)

## Output

```
enter no. of processes : 
3
enter arrival time, burst time and deadline of process 1(0 for none):
0
3
4
enter arrival time, burst time and deadline of process 2(0 for none):
0
2
3
enter arrival time, burst time and deadline of process 3(0 for none):
0
4
5
----Earliest Deadline Scheduling Diagram ----
00 _____
 | |
 |job 2|
 |_____|
2 _____
 | |
 |job 1|
 |_____|
5 _____
 | |
 |job 3|
 |_____|
9
```