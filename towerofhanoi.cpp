#include <iostream>
using namespace std;

void TOH(int n, char source, char target, char AUX){
    if(n==1){
        cout<<"Move disc 1 from " <<source <<"to"<<target<<endl;
        return;

    }
    TOH(n-1,source,AUX,target);
    TOH(n-1,AUX,target,source);
    
}

