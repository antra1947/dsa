#include<iostream>
using namespace std;



struct Node {
    int data;    // Data field to store the value
    Node* next;  // Pointer to the next node

    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr) {}
};

// Function to traverse and print the linked list
void traversal(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* current = head;
    while (current != nullptr) { // Traverse until the end of the list
        cout << current->data << endl; // Print the current node's data
        current = current->next; // Move to the next node
    }
}