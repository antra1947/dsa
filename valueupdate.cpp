#include <iostream>
using namespace std;

void updateValue(int arr[], int size, int position, int newValue) {
    if (position < 0 || position >= size) {
        cout << "Invalid position! Position must be between 0 and " << size - 1 << "." << endl;
        return;
    }

    arr[position] = newValue;
    cout << "Updated position " << position << " with value " << newValue << "." << endl;
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
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original array: ";
    displayArray(arr, size);

    int position, newValue;
    cout << "Enter the position to update (0-based index): ";
    cin >> position;
    cout << "Enter the new value: ";
    cin >> newValue;

    updateValue(arr, size, position, newValue);

    cout << "Array after update: ";
    displayArray(arr, size);

    return 0;
}




