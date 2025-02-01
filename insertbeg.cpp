#include <iostream>
using namespace std;

struct Node {
    int data;    
    Node* next;  
    Node* prev;
    Node(int value) : data(value), next(nullptr) {}
};

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node

    newNode->next = head; // Point the new node's next to the current head
    if (head != nullptr) { 
        head->prev = newNode; // Update the previous pointer of the old head
    }
    head = newNode; // Update the head to point to the new node
}