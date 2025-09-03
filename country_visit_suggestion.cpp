// Problem: Country Visit Suggestion
// Description: 
//   This program asks the user for their country. 
//   If the entered country is NOT "Germany" or "Australia", 
//   it suggests visiting these countries sometime.
//   Otherwise, no suggestion is displayed.
//
// Author: Umi E Ruman
// Date:   20-08-2025
// Goal:   To become one percent better everyday
#include <iostream>
using namespace std;

int main() 
{
    string country; // variable to store user input

    // Ask user for their country
    cout << "Which country do you live in? ";
    cin >> country;

    // Suggest visiting if not Germany or Australia
    if (country != "Germany" && country != "Australia") 
    {
        cout << "You should come to visit these sometime!" << endl;
    }

    return 0; // Program ends successfully
}

