#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    cout << "handshakes " << n << " people:\n";

    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            cout << "Handshake between Person " << i << " and Person " << j << endl;
        }
    }

    return 0;
}




