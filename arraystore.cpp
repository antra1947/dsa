#include <iostream>
using namespace std;

int main() {
   
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

     int sum = 0;

   
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

  
    cout << "The sum of array elements is: " << sum << endl;

    return 0;
}
