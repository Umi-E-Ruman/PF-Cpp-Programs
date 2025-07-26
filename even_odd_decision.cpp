#include <iostream>
using namespace std;

int main() {
    int num;

    cout << " please enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "the number is even!" << endl;
    }

    if (num % 2 != 0) {
        cout << " the number is odd!" << endl;
    }

    return 0;
}
