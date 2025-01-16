#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

  num1 = abs(num1);
  num2 = abs(num2);
        cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;


    return 0;
}
