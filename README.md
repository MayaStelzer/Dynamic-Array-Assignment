# Dynamic Array Assignment

This assignment shows your knowledge of how vectors manage its size and capacity and how the data type affects the memory usage.

## Part 1

Implement a dynamic array class without using std::vector or similar library classes.
Write the following:
1. Constructur: To initialize the dynamic array
2. Destructor: To clean up the allocated memory
3. Push Back: Add an element to the end of the array. If the array is full, double its capacity before adding the new element.
4. Remove At: Remove the element at the specific index, shifting following elements to the left.
5. Get At: Retrieve the element at a spefific index.

## Part 2

Demonstrate size vs capacity during resizing. You may use std::vector library.

Write a program that:
1. Create an empty vector of ints
2. Add 50,000 integers tot he vector and log the size and capacity after the entire operation.
3. Remove half the elements from the vector by resizing it to half its original size (eg. resize(size() / 2)) and log the size and capacity again.
4. Call shrink_to_fit() on the vector to optimize its memory usage and log the size and capacity again.
5. Measure and output the total time take for the entire sequence of operations

Your program should output the results in the following format:
``` 
After adding elements: Size = X, Capacity = Y
After resizing: Size = X, Capacity = Y
After shrink_to_fit(): Size = X, Capacity = Y
Time taken: X ms
```

## Part 3

Compare memory usage of std::vector<bool> and std::vector<char>.

Write a program that:
1. Creates a std::vector<bool> with 10,000 elements.
2. Creates a std::vector<char> with 10,000 elements.
3. Calculates and prints the memory usage for each vector in bytes.
Your program should output the results in the following format:

```
Memory usage of std::vector<bool>: X bytes
Memory usage of std::vector<char>: Y bytes
```
