#include<iostream>
#include<stack>
//0r we can use universal lib. - #include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> myStack;
    myStack.push(1);
    myStack.push(4);
    myStack.push(7);
    myStack.push(6);
    
    
    cout<<myStack.size();

return 0;
}

//5 operation -push,pop,size,empty,top