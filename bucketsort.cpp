#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(vector<float>& arr){
    int n = arr.size();
    vector<vector<float>>buckets(n);

    for(float num:arr){
        int bucketIndex = num * n;
        buckets[bucketIndex].push_back(num);
    }

    for(int i=0;i<n;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }
    int index = 0;
    for(int i=0;i<n;i++){
        for(float num: buckets[i]){
            arr[index++] = num;
        }
    }


}

int main(){
    vector<float> arr = {0.42,0.45,0.34,0.56};
    cout<<"before bucket sort: ";
    for  (float num : arr)cout<<num << " ";
    cout<<endl;
    bucketSort(arr);
    cout<<"After bucket sort : ";
    for(float num : arr)cout<<num<< " ";
    cout<<endl;
    return 0;
    
}