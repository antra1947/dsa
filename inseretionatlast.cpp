#include <iostream>
using namespace std;
void insertAtLast(Node* &head,int value){
    newNode->data=value;
    newNode->next=nullptr;
    if(head==nullptr){
        head=newNode;
    }else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

