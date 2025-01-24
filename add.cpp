#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}

int add(float a,float b){
    return a+b;
}
int main(){

    cout<<"Addition of two numbers is: "<<add(5,10)<<endl;
     cout<<"Addition of three numbers is: "<<add(5,10,89)<<endl;
      cout<<"Addition of float numbers is: "<<add(5.8f,10.6f)<<endl;
}

