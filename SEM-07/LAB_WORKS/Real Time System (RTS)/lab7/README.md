# Lab 7

## Objective

- To implement different file allocation strategies

## Theory

- Contiguous Allocation: In this scheme, each file occupies a contiguous set of blocks on the disk.
- Linked List Allocation: In this scheme, each file is a linked list of disk blocks which need not be contiguous. The disk blocks can be scattered anywhere on the disk. 
- Indexed Allocation: In this scheme, a special block known as the Index block contains the pointers to all the blocks occupied by a file.

## Code

[Contigous File Allocation](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab7/ContigousFileAllocation.c)

[Linked List File Allocation](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab7/LinkedFileAllocation.c)

[Indexed File Allocation](https://github.com/college-related/Labs-7th-sems/tree/main/Real%20Time%20System%20(RTS)/lab7/IndexedFileAllocation.c)