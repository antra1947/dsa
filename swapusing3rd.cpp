//swap  using third variable 
// #include<iostream>
// using namespace std;


// int main(){
//     int a = 10;
//     int b = 20;
//     cout<<"Before swap x= "<<a<<"and y = "<<b<<endl;
//     a=a+b;
//     b = a-b;
//     a = a-b;
//     cout<<"after swap x = "<<a<<"and y ="<<b<<endl;
//     return 0;

// }


//swap using bitwise operator
#include<iostream>
using namespace std;


int main(){
    int a = 10;
    int b = 20;
    cout<<"Before swap x= "<<a<<"and y = "<<b<<endl;
    a=a^b;
    b = a^b;
    a = a^b;
    cout<<"after swap x = "<<a<<"and y ="<<b<<endl;
    return 0;

}