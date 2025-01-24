//circular linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};
void traverse (Node* head){
    if(head==nullptr){
        cout<<"list is empty"<<endl;
    }
    Node* temp = head;

    do{
        cout<<temp->data<<endl;
        temp=temp->next;

    }
    while(temp!=head)
    
}


1x^y.cpp
Add files via upload
last week
2palindrome.cpp
Add files via upload
last week
2palindrome.exe
Add files via upload
last week
3sumofnnatural.cpp
Add files via upload
last week
4permutation.cpp
Add files via upload
last week
4permutation.exe
Add files via upload
last week
factorial.cpp
Add files via upload
last week
factorial.exe
Add files via upload
last week
fibonacci.cpp
Add files via upload
last week
gcd.cpp
Add files via upload
last week
gcd.exe
Add files via upload
last week
reversestring.cpp
Add files via upload
last week
reversestring.exe
Add files via upload
last week
sumofdigits.cpp
Add files via upload
last week
sumofdigits.exe
Add files via upload
last week
towerofhanoi.cpp
Add files via upload
last week
x^y.exe











