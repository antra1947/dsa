#include <iostream>
using namespace std;

void deleteFromPosition(int arr[], int &size, int position) {
    if (size == 0) {
        cout << "Underflow!" << endl;
        return;
    }

    if (position < 0 || position >= size) {
        cout << "Invalid position! Position must be between 0 and " << size - 1 << "." << endl;
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
    cout << "Deleted element from position " << position << "." << endl;
}

void displayArray(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int capacity = 10; 
    int arr[capacity] = {1, 2, 3, 4, 5}; 
    int size = 5; 

    cout << "Original array: ";
    displayArray(arr, size);

    int position;
    cout << "Enter the position to delete (0-based index): ";
    cin >> position;

    deleteFromPosition(arr, size, position);

    cout << "Array after deletion: ";
    displayArray(arr, size);

    return 0;
}
// 2. Write a program to deal with real-world situations where Stack data structure is widely used
// Evaluation of expression: Stacks are used to evaluate expressions, especially in languages that use postfix or prefix notation. Operators and operands are pushed onto the stack, and operations are performed based on the LIFO principle.

// 1. Write a program for implementing a  MINSTACK  which should support operations like push, pop, overflow, underflow, and display
// a. Construct a stack of N-capacity
// b. Push elements 
// c. Pop elements
// d. Top element 
// e. Retrieve the min element from the stack


// 3. Write a program for finding NGE NEXT GREATER ELEMENT from an array