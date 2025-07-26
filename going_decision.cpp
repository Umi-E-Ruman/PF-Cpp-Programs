#include <iostream>
using namespace std;

int main() {
    char going;

    cout << "Are you going? (Y/N): ";
    cin >> going;

    if (going == 'Y') {
        cout << "I am also going." << endl;
    }

    return 0;
}
