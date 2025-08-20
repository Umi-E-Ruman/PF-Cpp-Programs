// Problem: Discount Calculation Based on Day and Purchase
// Description: This program calculates the total payable amount. 
//              If the day is Sunday and the purchase is greater than 5000, 
//              then a 10% discount is applied. Otherwise, no discount is applied.
// Author: Umi E Ruman
// Date: 20-03-2025
// Goal: To become one percent better everyday


#include<iostream>
using namespace std;

int main()
{
    int purchase, discount;   // variables to store purchase amount and discount
    string day;               // variable to store day input

    // Ask user to enter the day
    cout << "Enter the day: ";
    cin >> day;

    // Ask user to enter purchase amount
    cout << "Enter the total purchase amount: ";
    cin >> purchase;

    // Check if it is Sunday AND purchase is greater than 5000
    if (day == "sunday" && purchase > 5000)
    {
        // Apply 10% discount
        discount = purchase * 0.1;

        // Show discounted amount
        cout << "Total Payable Amount (with discount): " 
             << purchase - discount << endl;
    }
    else
    {
        // Show original amount without discount
        cout << "Total Payable Amount: " << purchase << endl;
    }

    return 0;
}
