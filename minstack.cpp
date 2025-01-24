#include<iostream>
using namespace std;



void InsertAtEnd(int arr[],int& size, int value, int position, int maxSize){
    if(position<0 || position > size){
        cout<<"Invalid position"<<endl;
        return;
    }
    for (int i=size;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position]=value;
    size++;
}