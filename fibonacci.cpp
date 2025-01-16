

#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n == 0){ 
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;
    cout << "Enter the position (n) to find the nth Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci sequence is not defined for negative numbers." << endl;
    } else {
        cout << "The Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    }

    return 0;
}
