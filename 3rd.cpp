//sorting 0s,1s,2s 
#include<iostream>
#include<vector>
using namespace std;



void sortArray(vector<int>& arr){
    int count0 = 0, count1 = 0, count2 = 0;
    //count occurrence
    for(int num : arr){
        if(num==0){
            count0++;

        }else  if(num == 1){
            count1++;
        }else{
            count2++;
            
        }
    }
    //rewrite the array with sorted values
    int index = 0;
    for(int i=0;i<count0;i++){
        arr[index++] = 0;
    }
    for(int i=0;i<count1;i++){
        arr[index++] = 1;
    }
    for(int i=0;i<count2;i++){
        arr[index++] = 2;
    }
}
int main(){
    vector<int> arr = {2,1,2,2,0,0,1};
    cout<<"original array: ";
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    sortArray(arr);
    cout<<"sorted array: ";
    for(int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}

//dutch flag

