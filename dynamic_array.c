#include <math.h>     // sqrt
#include <stdio.h>    // printf
#include <stdlib.h>   // malloc, atoi
#include <assert.h>
#include <time.h>     // to obtain wall clock time at points in our code

#define DEFAULT_N 100

// function declarations
void populate(double * arr_ptr, int N);
void square_roots(double * arr_ptr, int N);
void test(double * arr_ptr, int N);
void rand_update(double * arr_ptr, int N);

/*
 * Step 1. Populate the array with squares of numbers, starting from 0.0
 */
  // Fill nums with squares, using indexing
  //   Position nums[0] wil contain 0.0, nums[1] 1.0, nums[2] 4.0, etc.
  //   like this:
  //   0.0, 1.0, 2.0, 9.0, 16.0, 25.0, ... 
  // 
  // TODO: complete this code to fill the array
void populate(double * arr_ptr, int N) {

}

/*
 * Step 2. write this function 
 * 
 *  Given an array whose zeroth value is at arr_ptr and whose length is N,
 *  change every value of the array to the square root of its original value
 */
void square_roots(double * arr_ptr, int N) {

}

/*
 * Step 3. Write this function
 * 
 *  Given an array whose zeroth value is at arr_ptr and whose length is N,
 *  loops through array to test with an assert if every value at an index is
 *  equal to the index.
 */
void test(double * arr_ptr, int N) {

}

/*
 * Step 4. Write this function
 * 
 *   Given an array whose zeroth value is at arr_ptr and whose length is N,
 *   perform N random updates of the array by obtaining a random value between
 *   0 and N, then use it as the index of the array whose value will be updated to be 
 *   the square root of the current value at that postition.
 */
void rand_update(double * arr_ptr, int N) {

}

/*
 * Program that creates an array by dynamically allocating it. 
 * Then that array is manipulated by the functions defined above.
 */
int main(int argc, char *argv[]) {
  
    // We will use these to time our code
    clock_t begin, end;
    double time_spent;

    ///////////// Array creation
    double * nums;   // will hold a dynamically allocated array

    int array_length = DEFAULT_N;   // default if nothing entered on command line
    // argc is the total number of arguments, including the invoking of the program
    // argv[] is an array of strings
    // argv[0] always has the name of the program
    // argv[1] has the first argument typed
    //
    if (argc > 1) {  // if we have provided a length
        array_length = atoi(argv[1]);    // atoi converts a string to an int
    }
    printf("For program %s, array length is set to %d\n", argv[0], array_length);
    ///////////// Array creation

    begin = clock();  // start the timing
    // Step 0. allocate space for the array on the heap
    // 
    // TODO: add code here for allocating the array


    end = clock();  // end the timing
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time to malloc array: %f seconds\n", time_spent); 

    //////////////////////  time how long it takes to populate the array with values
    begin = clock();

    populate(nums, array_length);

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time to fill array: %f seconds\n", time_spent);
    ////////////////////////////////////////////////////////////////////////////////

    //////////////////////// time how long it takes to change all the values to be the square root
    begin = clock();

    // set values to square root of each element by calling function square_roots
    square_roots(nums, array_length);

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time to compute square_roots: %f seconds\n", time_spent);
    ////////////////////////////////////////////////////////////////////////////////

    // check whether accurate without printing by using the function called test
    test(nums, array_length);

    ///////////////////// time how long it takes to re-fill the array
    begin = clock();
    // re-fill nums with squares, using indexing
    // 0.0, 1.0, 2.0, 4.0, 8.0, 16.0, etc.
    populate(nums, array_length);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time to fill array again: %f seconds\n", time_spent);
    ////////////////////////////////////////////////////////////////////////////////

    /////////////////// time how long it takes to perform updates at random locations
    begin = clock();

    // set values to square root of each element by calling function square_roots
    rand_update(nums, array_length);

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time to compute random square_roots: %f seconds\n", time_spent);
    ////////////////////////////////////////////////////////////////////////////////

    // Step 5. make sure to remove the array nums that was allocated to the heap
    
  
    return 0;
}
