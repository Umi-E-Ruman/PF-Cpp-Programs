
#include <iostream>
using namespace std;

int main() {
    string password = "secret"; 
    string userInput;

    cout << "Enter the password: ";
    cin >> userInput;

    if (userInput == password) {
        cout << "Wow, you have cracked the password!" << endl;
    }

    if (userInput != password) {
        cout << "Try again!" << endl;
    }

    return 0;
}
