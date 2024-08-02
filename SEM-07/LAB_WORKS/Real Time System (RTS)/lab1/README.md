# Lab 1

## Objective

- To create a preemptive priority scheduling program in java

## Theory

- Scheduling is the process of dividing execution time for the processes that are coming in the CPU to execute in an order.
- Priority scheduling is the type of scheduling in which each process has a priority set to it which determines the order of the process execution.
- Preemptive scheduling are those scheduling in which one process can interrupt another process if some condition is meet even if the process being executed at the moment is not completed.
- Example for preemptive priority scheduling:

```
Process     Brust Time      Arrival Time        Priority
 p1            3                1                   4
 p2            2                2                   5
 p3            4                4                   2
 p4            3                6                   1
 p5            2                7                   3

Gant Chart will be

p1(1) --> p2(2) --> p1(2) --> p3(2) --> p5(2) --> p3(1) --> p4(3)

Here, the p1 process is executed for 1 milisecond then interrupted by higher priority process p2 which runs for 2 milisecond
after which the process p3 arrives but p1 has higher priority hence finishes p1 remaning 2 milisecond execution then p3 is 
executed for 2 milisecond when p4 and p5 arrives among which p5 has high priority hence will be executed first then p3 and finally p4.
```

## Code

[here](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab1/PreemptivePriorityScheduling.java)

## Output

```
Enter the number of process : 3

Enter burst time : time priorities

Process[1]:1
2

Process[2]:3
1

Process[3]:4
3


Process          Burst Time      Wait Time       Turn Around Time   PreemptivePriorityScheduling

   2               3                 0               3               1

   1               1                 3               4               2

   3               4                 4               8               3

Average Wait Time : 2
Average Turn Around Time : 5
```