//swap without using third variable 
#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}
int main(){
    int a = 10;
    int b = 20;
    cout<<"Before swap x= "<<a<<"and y = "<<b<<endl;
    return 0;

}
