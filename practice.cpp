#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};


Node* insertInSortedOrder(Node* head, int value) {
    // Create a new node
    Node* newNode = new Node(value);

    // Case 1: Insertion at the beginning or empty list
    if (head == nullptr || head->data >= value) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Case 2: Traverse to find the correct position
    Node* current = head;
    while (current->next != nullptr && current->next->data < value) {
        current = current->next;
    }

    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;

    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Creating a sorted linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original List: ";
    printList(head);

    // Inserting values
    head = insertInSortedOrder(head, 25);
    cout << "After Inserting 25: ";
    printList(head);

    head = insertInSortedOrder(head, 5);
    cout << "After Inserting 5: ";
    printList(head);

    head = insertInSortedOrder(head, 35);
    cout << "After Inserting 35: ";
    printList(head);

    return 0;
}


// void reverse(Node*& head){
//     Node* prev = nullptr;
//Node* current = head;
//     Node* next = nullptr;

//     while (current != nullptr){
//         next=current->next;
//         current->next= prev;
//         prev = current;
//         current=next;
//     }
//     head=prev;
// }

//p node c node n node target current node nextnode-current wale ke address dala to connect back
//current ke prev node