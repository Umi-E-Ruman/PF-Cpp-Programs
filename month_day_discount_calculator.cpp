// Program: Sunday Discount Calculator
// Description: This program checks if a discount applies based on the entered day and month.
//              A 10% discount is applied if the day is Sunday and the month is either March or October.
// Author: Umi E Ruman
// Date: 17 March  2025
// Goal: To become 1 percent better everyday

#include<iostream>
using namespace std;

int main()
{
    int totalAmount;           // Original amount before discount
    int discountAmount;        // Amount of discount
    int discountedAmount;      // Final amount after discount
    string day;                // Input: day of the week
    string month;              // Input: name of the month

    // Taking inputs from the user
    cout << "Enter total amount: ";
    cin >> totalAmount;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    // Checking for discount conditions
    if (day == "sunday" || day == "Sunday")
    {
        // Applying 10% discount only in March or October
        if (month == "October" || month == "october")
        {
            discountAmount = totalAmount * 0.10;
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
        else if (month == "March" || month == "march")
        {
            discountAmount = totalAmount * 0.10;
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
        else
        {
            cout << "No discount: Offer only valid in March or October.";
        }
    }
    else
    {
        cout << "The discount is not available: Offer only valid on Sundays.";
    }

    return 0;
}


