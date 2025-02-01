#include<iostream>
#include<vector>
using namespace std;

void merge2SortedArrays(vector<int>& arr, int s, int mid, int e) {
    // Add your merge logic here
}

void mergeSort(vector<int>& arr, int s, int e) {
    if (s >= e) return;
    int mid = s + (e - s) / 2;

    // Left mergeSort
    mergeSort(arr, s, mid);
    // Right mergeSort
    mergeSort(arr, mid + 1, e);

    // Merging the two sorted halves
    merge2SortedArrays(arr, s, mid, e);
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}





