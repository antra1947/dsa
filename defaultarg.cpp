#include<iostream>
using namespace std;

class MyClass{
    public:
    void Display(int x=10){
        cout<<"Value is : "<<x<<endl;
    }
};
int main(){
    MyClass obj;
    obj.Display();
    obj.Display(50);
    return 0;
}