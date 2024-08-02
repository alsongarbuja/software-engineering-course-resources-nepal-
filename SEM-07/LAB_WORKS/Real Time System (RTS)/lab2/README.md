# Lab 2

## Objective

- To create a non-preemptive priority scheduling program in java

## Theory

- Scheduling is the process of dividing execution time for the processes that are coming in the CPU to execute in an order.
- Priority scheduling is the type of scheduling in which each process has a priority set to it which determines the order of the process execution.
- Non Preemptive scheduling are those scheduling in which one process cannot interrupt another process when another process is being executed at the moment even if the new coming process has high priority.
- Example for preemptive priority scheduling:

```
Process     Brust Time      Arrival Time        Priority
 p1            3                1                   4
 p2            2                2                   5
 p3            4                4                   2
 p4            3                6                   1
 p5            2                7                   3

Gant Chart will be

p1(3) --> p2(2) --> p3(4) --> p5(2) --> p4(3)

Here, the p1 process is executed for 3 milisecond the process p2 runs for 2 milisecond
after which the process p3 arrives and executed for 4 milisecond at which time p4 and p5 arrives 
among which p5 has high priority hence will be executed first then p4.
```

## Code

[here](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab2/NonPreemptivePriorityScheduling.java)

## Output

```
Enter the number of Process for Scheduling: 3

Enter the burst time   for Process - 0 : 4
Enter the arrival time for Process - 0 : 2
Enter the priority     for Process - 0 : 2

Enter the burst time   for Process - 1 : 3
Enter the arrival time for Process - 1 : 3
Enter the priority     for Process - 1 : 3

Enter the burst time   for Process - 2 : 2
Enter the arrival time for Process - 2 : 4
Enter the priority     for Process - 2 : 1

Priority Scheduling Algorithm : 
ProcessId           BurstTime         ArrivalTime            Priority          FinishTime         WaitingTime      TurnAroundTime
        P0                   4                   2                   2                   6                   0                   4
        P1                   3                   3                   3                   9                   3                   6
        P2                   2                   4                   1                  11                   5                   7
                                                                                    Average            2.666667            5.666667
```