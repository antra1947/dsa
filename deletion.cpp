#include <iostream>
using namespace std;

void deleteFromEnd(int arr[], int &size) {
    if (size == 0) {
        cout << "Underflow!" << endl;
        return;
    }

    
    size--;
    cout << "Deleted element from the end." << endl;
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

    deleteFromEnd(arr, size);

    cout << "Array after deletion: ";
    displayArray(arr, size);

    return 0;
}
