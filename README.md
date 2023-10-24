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

* Complete the code in `dynamic_array.c`
* Run your code on arrays of various (large) sizes
* Identify the least efficient of the four functions in your C code

There are several steps needed to get this code completed. You should be able to
`make` after each step to ensure that your code is compiling. Note that making
and running as you go along makes it easier to fix your mistakes.

Each step described below is also a good point to commit and push your work to
GitHub!

### Steps

0. In `main`, create the dynamically allocated array named `nums`. Check that it
compiles. You can run your code, but times reported will be short to
non-existent.

1. Complete the function called `populate` as described here (and in the code).
    - Given the array and its length, write code to fill the array with values
    - At each index `i` in the array, store the square of `i`
    - Note that you will need to cast the integer index `i` to a double before
multiplying it by itself--you need to fill the array with doubles
    - Compile and run your code until this function works, then be sure to **commit**!

2. Complete the function called `square_roots` as described here (in the code)
   - Given an array `arr_ptr` and given its length `N`, change every value in the array to the
   square root of its original value
   - Use the `math.h` library, which contains a `sqrt` function
   - Compile and run your code until this function works, then be sure to **commit**!

3. Complete the function called `test` as described here (and in the code)
   - Given an array `arr_ptr` and its length `N`, this function should loop through the array
   and check whether the value at each index is equal to the index
   - Use `assert` to do the checks
   - Be careful about types here!
   - Compile and run your code until this function works, then be sure to **commit**!

4. Complete the function called `rand_update` as described here (and in the code).
   - This function takes in an array `arr_ptr` and its length `N`  
   - It should loop `N` times
   - Inside the loop, it should generate a random integer value between 0 and `N-1`
   - It should use the random integer as an index into the array, and it should change the
   value in the array at that index to be the square root of its previous value
   - Use the C function `rand` to generate the random integer
   - Compile and run your code until this function works, then be sure to **commit**!

5. At the end of `main` add code needed to de-allocate the `nums` array; Compile, run, and commit!

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

1. Good coding practice: correctly indented/formatted code, header comment
describing the program, name in header comment, readable.
2. Your functions should work correctly as described.
3. Use good coding practice regarding floating point numbers (doubles in this case). Hint: think carefully about loops and relational expressions.
4. You answer the question above correctly in a file named `report.txt`.
