# Lab 6

## Objective

- To implement MVT (Multiprogramming with a variable number of tasks) and MFT (Multiprogramming with a fixed number of tasks) memory management techniques in C.

## Theory

- MFT (Multiprogramming with a Fixed number of Tasks) is one of the old memory management techniques in which the memory is partitioned into fixed size partitions and each job is assigned to a partition. The memory assigned to a partition does not change.
- MVT (Multiprogramming with a Variable number of Tasks) is the memory management technique in which each job gets just the amount of memory it needs. That is, the partitioning of memory is dynamic and changes as jobs enter and leave the system.
- MVT is a more ``efficient'' user of resources. 
- MFT suffers with the problem of internal fragmentation and MVT suffers with external fragmentation.

## Code

[MVT](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab6/MVT.c)

[MFT](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab6/MFT.c)

## Output

- For MFT
```
Enter the total memory available (in Bytes) -- 1000
Enter the block size (in Bytes)-- 300
Enter the number of processes – 5
Enter memory required for process 1 (in Bytes) -- 275
Enter memory required for process 2 (in Bytes) -- 400
Enter memory required for process 3 (in Bytes) -- 290
Enter memory required for process 4 (in Bytes) -- 293
Enter memory required for process 5 (in Bytes) -- 100
No. of Blocks available in memory -- 3

PROCESS MEMORY-REQUIRED ALLOCATED INTERNAL-FRAGMENTATION
1                             275                              YES                               25
2                             400                               NO                            -----
3                             290                              YES                               10
4                             293                              YES                                7
Memory is Full, Remaining Processes cannot be accommodated
Total Internal Fragmentation is 42
Total External Fragmentation is 100
```

- For MVT
```
Enter the total memory available (in Bytes) -- 1000
Enter memory required for process 1 (in Bytes) -- 400
Memory is allocated for Process 1
Do you want to continue(y/n) -- y
Enter memory required for process 2 (in Bytes) -- 275
Memory is allocated for Process 2
Do you want to continue(y/n) -- y
Enter memory required for process 3 (in Bytes) -- 550

Memory is Full
Total Memory Available -- 1000
PROCESS MEMORY-ALLOCATED
1                        400
2                        275
Total Memory Allocated is 675

Total External Fragmentation is 325
```