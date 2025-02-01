#include <iostream>
using namespace std;

struct Node {
    int data;    
    Node* next;  
    Node* prev;
    Node(int value) : data(value), next(nullptr) {}
};
void deleteFromFront(Node*& head){
    if(head==nullptr){
        cout<<"This is empty"<<endl;
        return;
    }
    Node* temp = head;
    head=head->next;

    if(head!=nullptr){
        head->prev=nullptr;
    }
    delete temp;
}
