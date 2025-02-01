#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countingSort(vector<int>& arr){
    int maxElement = *max_element(arr.begin(), arr.end());
    vector<int> count(maxElement + 1, 0);
    for(int num : arr){
        count[num]++;
    }
    int index = 0;
    for(int i=0;i<=maxElement;i++){
        while(count[i]--){
            arr[index++] = i;
        }
    }
}

int main(){
    vector<int> arr = {4,3,4,2,8,3,3,1};
    cout<<"before counting sort: ";
    for(int num: arr)cout<<num<<" ";
    cout<<endl;

    countingSort(arr);
    cout<<"After Counting Sort: ";
    for(int num:arr)cout<<num<<" ";
    cout<<endl;
    return 0;

}