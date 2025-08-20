// Problem: Discount Calculation Based on Day, Month, and Purchase
// Description: This program calculates the total payable amount. 
//              If the day is "sunday" AND the month is either "october" or "march",
//              then a 10% discount is applied. Otherwise, no discount is applied.
// Author: Umi E Ruman
// Date: 20-03-2025
// Goal: To become one percent better everyday


#include<iostream>
using namespace std;

int main()
{
    int purchase, discount;   // variables to store purchase amount and discount
    string day, month;        // variables to store day and month

    // Input: day
    cout << "Enter the day: ";
    cin >> day;

    // Input: month
    cout << "Enter the month: ";
    cin >> month;

    // Input: purchase amount
    cout << "Enter the total purchase amount: ";
    cin >> purchase;

    // Condition: If it's Sunday AND (month is October or March)
    if (day == "sunday" && (month == "october" || month == "march"))
    {
        discount = purchase * 0.1; // 10% discount
        cout << "Total Payable Amount (with discount): " 
             << purchase - discount << endl;
    }
    else
    {
        // No discount
        cout << "Total Payable Amount: " << purchase << endl;
    }

    return 0;
}

