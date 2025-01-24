#include <iostream>
using namespace std;


// struct Node {
//     int data;
//     Node* next;

//     Node(int value) : data(value), next(nullptr) {}
// };
// void middle(Node*& head){
//     if(head==nullptr) 
//     return nullptr;
//     Node* P1 = head;
//     Node* P2 = head;

//     while(P2 != nullptr && P1->next != nullptr){
//         P1=P1->next;
//     }
// }


int main(){
    string str = "Hello , world";
    cout<<str<<endl;

    cout<<str[5]<<endl;
    str[5]='m';
    cout<<str[5]<<endl;

    cout<<"length of the string"<<str.length()<<endl;
}


















Node* findMiddle(Node* head) {
    if (head == nullptr) return nullptr; 

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; 
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Linked List: ";
    printList(head);

    Node* middle = findMiddle(head);
    if (middle != nullptr) {
        cout << "Middle Node: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
