# Lab 3

## Objective

- To create a Rate Monotonic Scheduling program in java

## Theory

- Scheduling is the process of dividing execution time for the processes that are coming in the CPU to execute in an order.
- The rate monotonic scheduling (RMS) algorithm is a real-time scheduling algorithm that assigns priorities to tasks based on their periods (the time between successive releases of the task). 
- The algorithm assigns higher priorities to tasks with shorter periods, with the goal of ensuring that all tasks meet their deadlines.

```
Process     Brust Time      Arrival Time        Execution Period
 p1            3                0                   20
 p2            2                0                   5
 p3            2                0                   10

Gant Chart will be

p2(2) --> p3(2) --> p1(1) --> p2(2) --> p1(2) --> x(1) --> p2(2) --> p3(2) --> x(1) --> p2(2)

Here, the p2 process is executed for 2 unit of time because it has highest priority and needs to be executed 2 unit
time every 5 units of time period. Then the p3 will be executed for 2 unit of time as it has to be executed 2 unit
time every 10 units of time period. Finally p1 will executed for 1 unit of time cause after that p2 will over take
as RMA is a preemptive scheduling. And the execution goes on.
```

## Code

[here](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab3/RateMonotonicScheduling.java)

## Output

```

```