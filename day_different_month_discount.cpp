// Problem: Discount Based on Day and Month
// Description: This program calculates the discounted payable amount 
//              based on the given day and month. 
//              - On Sundays in October, March, or August → 10% discount.
//              - On Mondays in November or December → 5% discount.
// Author: Umi E Ruman
// Date: 20-03-2025
// Goal: To become one percent better everyday 

#include<iostream>
using namespace std;

int main()
{
    int purchase, discount;      // Variables for purchase amount and discount
    string day, month;           // Input day and month
    
    // Taking inputs from user
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the total purchase amount: ";
    cin >> purchase;

    // Condition 1: Sunday and specific months → 10% discount
    if (day == "sunday")
        if (month == "october" || month == "march" || month == "august") 
        {
            discount = purchase * 0.1;
            cout << "Total Payable Amount: " << purchase - discount;
        }

    // Condition 2: Monday and specific months → 5% discount
    if (day == "monday")
        if (month == "november" || month == "december") 
        {
            discount = purchase * 0.05;
            cout << "Total Payable Amount: " << purchase - discount;
        }

    return 0;
}
