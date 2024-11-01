# Dynamic Array Access and Efficiency

## Overview

The goal of this assignment is to experiment with the effects of locality and caching on very large arrays. Large enough that too many cache misses cause a noticeable delay. You will write a program to allocate, fill, and manipulate large arrays of doubles.

You will:
* Complete the code in `dynamic_array.c`
* Run your code on arrays of various (large) sizes
* Identify the least efficient of the four functions in your C code and report
that, along with your explanation for why


### Rubric
* `report.txt` (3 points)
    - Text file contains a short paragraph that correctly identifies
    which function is slowest, and provides a **correct** explanation for why.
* `dynamic_array.c` (19 points)
   - Descriptive comment with your name at the top, good coding style (2 points)
   - Step 0: Allocates array correctly using malloc (3 points)
   - Step 1: `populate` function defined correctly (3 points)
   - Step 2: `square_roots` function defined correctly (3 points)
   - Step 3: `test` function defined correctly (3 points)
   - Step 4: `rand_update` function defined correctly (4 points)
   - Step 5: Frees the array at the end (1 point)

### Starter Files

* `Makefile`
    - A simple makefile that will compile your program
* `dynamic_array.c`
    - This file contains starter code for our program and the `main`
    function. You will define a set of helper functions, as well as
    making changes to the `main` function, and will time each major
    part of the process.
    - Note that this program allows command-line inputs, read more about that below!

### Execution

As always, the graders should be able to build, check, and clean your code:

```
make clean
make
./dynamic 160000
```

### Command-line arguments in C

This program has a `main` function that is set up to allow for command-line arguments.
This means that when we run the executable in the shell, we can pass information
to the program. In this case, we can add a number to specify how long the array 
should be.

**How does this work?**

To use command-line arguments, we can define `main` to take in two inputs:

```
int main(int argc, char *argv[]) {...}
```

The first input, `argc`, is the number of tokens (strings separated by spaces) in the command typed in the shell. This will always be at least 1, since the count includes
the executable's own name. If `argc` is greater than 1, then the user passed in
an argument that we might want to decode and use.

The second input, `argv`, is an array of strings. Each position in the array holds
one of the tokens from the command. `argv[0]` always holds the name of the executable
(`dynamic`, in this case). `argv[1]` holds the first command-line argument, and so on.

In `dynamic_array.c`, the first thing that `main` does is to check for the command-line
argument. If there was one, then it converts it from a string to an integer, and
uses that for the array length.

    
## Tasks to Complete

There are several steps needed to get this code completed.

**For each step:**
* Make sure you can make and run your code at each step
* Debug each step on both small array sizes and large arrays sizes, including
adding print statements to ensure that the operations are working correctly
    - "When in doubt, print it out!"
    - Get creative about printing large arrays, maybe only print very 1000th or
    10,000th element
* Comment out all debugging print statements when you are ready to time your code!
    - Output is one of the slowest operations a computer does, so we
    cannot get a clear sense of the timing of other operations if print
    statements are happening
* Commit and push your code after each step!

**Don't forget to write the report!** The final step below asks you to write a report in a text file that you create.

### Step 0: Allocate the array

In `main`, create the dynamically allocated array named `nums`.
Be sure to check whether `malloc` worked correctly, and be sure to allocate enough
space for doubles.

Check that it compiles and runs. Times reported will small to non-existent.

### Step 1: Complete `populate`

Complete the function called `populate` as described here (and in the code).
- Given the array and its length, write code to fill the array with values
- At each index `i` in the array, store the square of `i`
- Note that you will need to cast the integer index `i` to a double before
multiplying it by itself--you need to fill the array with doubles
- Compile and run your code until this function works
- Test this function on very large arrays (between 16000000 and 60000000) and make
sure it works for all these ranges
- Commit and push!

### Step 2: Complete `square_roots`

Complete the function called `square_roots` as described here (in the code)
- Given an array `arr_ptr` and given its length `N`, change every value in the array to the square root of its original value
- Use the `math.h` library, which contains a `sqrt` function
- Compile and run your code until this function works
- As before, test on very large arrays
- Commit and push!

**Note** that after running `populate` and then `square_root` in sequence,
the values in the array should be (more or less) equal to the indices of the array.

### Step 3: Complete `test`

Complete the function called `test` as described here (and in the code)
- Given an array `arr_ptr` and its length `N`, this function should loop through
the array and check whether the value at each index is equal to the index
- Use `assert` to do the checks
- Be careful about comparing types here!
- Compile and run your code until this function works
- As before, test on very large arrays
- Commit and push!

### Step 4: Complete `rand_update`

Complete the function called `rand_update` as described here (and in the code).
- This function takes in an array `arr_ptr` and its length `N`  
- It should loop `N` times
- Inside the loop, it should generate a random integer value between 0 and `N-1`
- It should use the random integer as an index into the array, and it should change the
value in the array at that index to be the square root of its previous value
- Use the C function `rand` to generate the random integer
- Compile and run your code until this function works
- As before, test on very large arrays
- Commit and push!

### Step 5: Deallocate the array

At the end of `main` add code needed to de-allocate the `nums` array; Compile, run, and commit!

### Step 6: Identify the inefficient function

For this part of the assignment, please create a plain text file named
`report.txt`, and submit it as part of your GitHub repository.

In `main`, we use a function from `time.h` called `clock()` to give a
system wall clock time. We capture the time before and after a section of code,
and use the difference divided by the constant `CLOCKS_PER_SEC` to determine how
many seconds that section of code took to run.

Run your program on varying size arrays, ranging from 16000000 to 60000000. 
**Record the resulting times.** These should give times over one millisecond,
except for the call to `malloc`, which is fast.

In your report, answer this question: 

**Which function in `dynamic_arrays.c` takes the longest time to run?** 

Based on what you have learned in class, explain what would cause this function 
to be slower than the others.

