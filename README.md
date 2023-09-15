# C-Array-Utilities
This C library provides useful functions for array operations, including generating random numbers, sorting arrays, reversing arrays, and more. It can be used in projects that involve array manipulations.

## Functions
This library provides a collection of useful functions for array operations. Here is a detailed explanation of each function:

### `void set_random_array(int* p, size_t size)`
- **Purpose:** Generates a random array of specified size.
- **Parameters:**
  - `p`: (int*): Pointer to the array where the random values will be stored.
  - `size`: (size_t): The size of the array to be generated.
- **Usage:**
  ```c
  int myArray[10];
  set_random_array(myArray, 10);

### `void print_array(const int* p, size_t size)`
- **Purpose:** Prints the elements of an array.
- **Parameters:**
  - `p`: (const int*): Pointer to the array to be printed.
  - `size`: (size_t): The size of the array.
- **Usage:**
  ```c
  int myArray[5] = {1, 2, 3, 4, 5};
  print_array(myArray, 5);

### `void reverse_array(int* p, size_t size)`
- **Purpose:** Reverses the order of elements in an array.
- **Parameters:**
  - `p`: (int*): Pointer to the array to be reversed.
  - `size`: (size_t): The size of the array.
- **Usage:**
  ```c
  int myArray[5] = {1, 2, 3, 4, 5};
  reverse_array(myArray, 5);

### `void sort_array(int* p, size_t size)`
- **Purpose:** Sorts an array in ascending order using the bubble sort algorithm.
- **Parameters:**
  - `p`: (int*): Pointer to the array to be sorted.
  - `size`: (size_t): The size of the array.
- **Usage:**
  ```c
  int myArray[5] = {5, 3, 1, 4, 2};
  sort_array(myArray, 5);  

  

