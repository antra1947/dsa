#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    if (n == 0) 
        return 0;
    return (n % 10) + sumOfDigits(n / 10); 
}

int main() {
    int num;
    cout << "Enter a  integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Sum of digits is not defined for negative numbers." << endl;
    } else {
        cout << "The sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    }

    return 0;
}
