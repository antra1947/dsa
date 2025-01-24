#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void InsertAtBeginning(Node*& head,int value){
    Node* newNode = new Node();
    newNode ->data = value;
    newNode->next=head;
    head=newNode;


}