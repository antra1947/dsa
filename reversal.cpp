
#include <iostream>
using namespace std;

struct Node {
    int data;     // Data field to store value
    Node* next;   // Pointer to the next node
    Node* prev;   // Pointer to the previous node

    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

// Function to reverse a doubly linked list
void reverse(Node*& head) {
    if (head == nullptr) return; // Handle the empty list case

    Node* temp = nullptr;
    Node* current = head;

    // Swap the next and prev pointers for all nodes
    while (current != nullptr) {
        temp = current->prev;       // Save the previous pointer
        current->prev = current->next; // Swap prev and next
        current->next = temp;
        current = current->prev;    // Move to the next node (originally prev)
    }

    // Update the head to the new front of the list
    if (temp != nullptr) {
        head = temp->prev; // Update head to the last node in the original list
    }
}