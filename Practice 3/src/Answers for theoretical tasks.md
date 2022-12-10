# Answers for theoretical tasks

## Task 4a

It will write "y = LO", because `y` points to element of string `HELLO` with index 3, so it's the 4th element.

## Task 4b

The pointer points on char `f`. It has index 5

## Task 4c

It will print 4, because it's just pointer arithmetic. We can think about pointers as about `unsigned long`, moreover any pointer IS `unsigned long`.

### The 5th and 6th tasks were completed before reading lecture 4

## Task 5a

Yes it will, because it's just allocating memory on stack for pointer. But it's dangerous
to use it, because we can override some important data, 
because value pointer is almost random

## Task 5b

It's array of length 5 with values-pointers to struct person. 
Memory for array was allocated on stack. It's dangerous to use this array,
because we can override some important data, because value of each pointer
is almost random

## Task 5c
Honestly, honestly, I'm not a pervert, but that's also possible :)
1. `p1->name[0]`
2. `*((char *) (((void *) p1) + 4))` 
3. `*((char *) (((int *) p1) + 1))`
4. `(*(*p1).name)`

## Task 6
 
Your realisation is dangerous. There can be memory leaks. I rewrote it a bit.
Here's `valgrind` with `memcheck` tool output if run your template.
```
(base) ilia@ilia:~/diskD/UCLAN/С++ Cyprus/Practices$ valgrind --tool=memcheck ./Task6
==61016== Memcheck, a memory error detector
==61016== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==61016== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==61016== Command: ./Task6
==61016== 
List is empty 
Current list state: 1 
Current list state: 1 2 
Current list state: 5 4 3 1 2 
Current list state: 6 4 3 1 2 7 8 
==61016== 
==61016== HEAP SUMMARY:
==61016==     in use at exit: 128 bytes in 8 blocks
==61016==   total heap usage: 11 allocs, 3 frees, 73,872 bytes allocated
==61016== 
==61016== LEAK SUMMARY:
==61016==    definitely lost: 16 bytes in 1 blocks
==61016==    indirectly lost: 112 bytes in 7 blocks
==61016==      possibly lost: 0 bytes in 0 blocks
==61016==    still reachable: 0 bytes in 0 blocks
==61016==         suppressed: 0 bytes in 0 blocks
==61016== Rerun with --leak-check=full to see details of leaked memory
==61016== 
==61016== For lists of detected and suppressed errors, rerun with: -s
==61016== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```