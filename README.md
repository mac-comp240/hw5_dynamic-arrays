# What you are given

You have a code file called `dynamic_array.c` that needs to be completed. It can
be made with the provided Makefile. It creates an executable named **dynamic**
that can be run as follows:

    ./dynamic 16000000
    
Note that we will be trying this code with very large array sizes so that we can
see how much time it takes to create or manipulate the array.

The overall goal is to complete the following steps so that your code will be
able to create arrays of varying sizes and populate them with values as
described and change them with other functions that you will write. Then you
will be observing how well these functions perform. This will enable you to
quantify some of the concepts we have been learning about locality of our
programs and how the organization of cache creates better performing programs
that have good locality.

## What you will complete

There are several steps needed to get this code completed. You should be able to
`make` after each step to ensure that your code is compiling. Note that making
and running as you go along makes it easier to fix your mistakes as you go
along.

Each step described below is also a good point to commit and push your work to
GitHub!

### Set up your array in main
As step 0, complete the code in main to create the dynamically allocated array
named nums. Make to be sure it compiles; you can run, but times reported will be
short to non-existent.


1. Complete the function called populate as described in the code. Note that you
will need to cast the integer index in your loop to a double before multiplying
it by itself- you need to create doubles in the array. (make to be sure it
compiles; you can run with a fairly large size and see how many milliseconds it
takes to populate it)

2. Complete the function called square_roots as described in the code. Note for
this step that the math.h library has a function called sqrt that you should
use. (make and run again)

3. Complete the function called test as described in the code. (make and run
again)

4. Complete the function called rand_update as described in the code. This one
requires you to find out how to use the C function rand() to generate an integer
between 0 and the size of the array - 1. (make and run again)

5. Add the line of code in the end of main() needed to give the array nums back
and effectively de-allocate it and take it off of the run-time heap.

## Study results and report

Study the code in main to see how we can use a function from time.h called
clock() to give a system wall clock time. We take a time before a particular
section of code, then a time after it-- the difference, divided by a special
constant from  time.h called CLOCKS_PER_SEC tells us how many seconds that
section of code took.

Try running your program on varying sizes of your array from 16000000 (sixteen
million) elements to 60000000 (sixty million). These are sizes which should give
times that are over a millisecond, except for the malloc, which is quite fast.

{Submit Answer!|assessment}(free-text-1693658693)

## Grading criteria

1. Good coding practice applies in regard to a header comment in the file for
this program with your name in it, proper indenting, and readability.
2. Your functions should work correctly as described.
3. You answer the question above correctly.
