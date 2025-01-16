#include <iostream>
#include <vector>
#include <chrono>

template<typename T>
class DynamicArray {
private:
    T* arr;
    int size;
    int capacity;

    void resize() {
        // TODO: Implement resize function
    }
public:
    // Constructor
    DynamicArray() {
        // TODO: Initialize the array with a default size
    }

    // Destructor
    ~DynamicArray() {
        // TODO: Clean up allocatd memory
    }

    // Add an element to the end of the array
    void push_back(T element) {
        //TODO: Implement push_back function
    }

    // Remove element at the specified index
    void remove_at(int index) {
        //TODO: Implement remove_at function
    }

    // Get the element at the specified index
    T get_at(int index) {
        //TODO: Implement get_at function
    }
};

void part2() {
    //TODO: Implement part 2
}

void part3() {
    //TODO: Implement part 3
}