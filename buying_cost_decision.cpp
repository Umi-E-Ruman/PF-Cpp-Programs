#include <iostream>
using namespace std;

int main() {
    int cost;

    cout << "Enter the cost of the dress: ";
    cin >> cost;

    if (cost < 15000) {
        cout << "You will buy the dress." << endl;
    }

    return 0;
}
