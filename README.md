# Dynamic Array Access and Efficiency

For this assignment, you will practice the concepts of locality and cache
organization through the use of large arrays.

You must complete the code in `dynamic_array.c`. It can
be made with the provided Makefile. It creates an executable named **dynamic**
that can be run as follows:

    ./dynamic 16000000

The number is a command line argument which specifies the size of the array your
code will generate.
    
## Problem Definition

You will:

* Finish the TODOs in `dynamic_array.c`
* Run your code on arrays of various sizes
* Identify the least efficient of the four functions in your C code

There are several steps needed to get this code completed. You should be able to
`make` after each step to ensure that your code is compiling. Note that making
and running as you go along makes it easier to fix your mistakes.

Each step described below is also a good point to commit and push your work to
GitHub!

### Steps

0. In main, create the dynamically allocated array named `nums`. Check that it
compiles. You can run your code, but times reported will be short to
non-existent.

1. Complete the function called `populate` as described in the code. Note that
you will need to cast the integer index in your loop to a double before
multiplying it by itself--you need to fill the array with doubles. Compile and
run and commit. 

2. Complete the function called `square_roots` as described in the code. Use the
math.h library for this step. Compile and run and commit. 

3. Complete the function called `test` as described in the code. Compile and run
and commit. 

4. Complete the function called `rand_update` as described in the code. This one
requires you to use the C function rand() to generate an integer between 0 and
the size of the array - 1. Compile and run and commit.

5. Add the line of code in the end of main() needed to give the array `nums`
back and effectively de-allocate it and take it off of the run-time heap.
Compile and run and commit.

## Identify the inefficient function

For this part of the assignment, please create a plain text file named
`report.txt`, and submit it as part of your GitHub repository.

In `main`, we use a function from `time.h` called `clock()` to give a
system wall clock time. We capture the time before and after a section of code,
and use the difference divided by the constant `CLOCKS_PER_SEC` to determine how
many seconds that section of code took to run.

Run your program on varying size arrays, ranging from 16000000 to 60000000.
These should give times over one millisecond, excepting the call to `malloc`,
which is fast.

* Which function in `dynamic_arrays.c` takes the longest time to run? Explain
 why this is the case. Your answer can be just a few sentences long.

## Grading criteria

1. Good coding practice applies in regard to a header comment in the file for
this program with your name in it, proper indenting, and readability.
2. Your functions should work correctly as described.
3. You answer the question above correctly in a file named `report.txt`.
