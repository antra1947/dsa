//pass by reference
#include<iostream>
using namespace std;

void update(int &x){
    x = x + 5;
    cout<<"Inside the function x :"<<x<<endl;

}
int main(){
    int num = 10;
    update(num);
    cout<<"Outside the function :"<<num<<endl;
    return 0;
}

//it will give the same value inside as well as outside = 15

