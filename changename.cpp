#include<iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, oldPart, newPart;

    
    cout << "Enter your name: ";
    getline(cin, name);

    
    cout << "Enter the part of the name to be replaced: ";
    cin >> oldPart;

    cout << "Enter the new part to replace it with: ";
    cin >> newPart;

    size_t pos = name.find(oldPart);
    if (pos != string::npos) {
        name.replace(pos, oldPart.length(), newPart);

        cout << "Modified name: " << name << endl;
    } else {
        cout << "The part \"" << oldPart << "\" was not found in the name." << endl;
    }

    return 0;
}


