#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Please enter your name: ";
    cin >> name;

    if (name == "Ali") {
        cout << "Welcome!" << endl;
    }

    if (name != "Ali") {
        cout << "Try again!" << endl;
    }

    return 0;
}
