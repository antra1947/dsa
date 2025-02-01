#include <iostream>

using namespace std;

int findMin(int arr[], int size) {

    int idx = 0;
    for(int i=0;i<size;i++){
        if(arr[idx]> arr[i]){
            idx = i;
        }
    }
    return idx;
}
void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int idx = i;
for(int j=i;i<n;j++){
    if(arr[idx]>arr[j]){
        idx = j;
    }


    }
    swap(arr[idx],arr[i]);
}
//     int minElement = arr[0]; 
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < minElement) {
//             minElement = arr[i]; 
//         }
//     }
//     return minElement;
// }

int main() {
    int arr[] = {5, 1, 4, 2, 8}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element: " << findMin(arr, size) << endl;

    return 0;
}

