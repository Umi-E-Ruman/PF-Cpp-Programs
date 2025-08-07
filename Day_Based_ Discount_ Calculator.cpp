// Program: Discount Calculator based on Day and Month
// Description: Calculates discounted amount based on specific day and month combinations.
// Author: Umi E Ruman
// Date: 18 March 2025
// Goal: To become 1% better every day

#include<iostream>
using namespace std;

int main()
{
    // Declare variables to hold amounts and user input
    int totalAmount;
    int discountAmount;
    int discountedAmount;
    string day;
    string month;

    // Input total amount from user
    cout << "Enter total amount: ";
    cin >> totalAmount;

    // Input day from user
    cout << "Enter day: ";
    cin >> day;

    // Input month from user
    cout << "Enter month: ";
    cin >> month;

    // Check for Sunday discounts
    if (day == "sunday" || day == "Sunday")
    {
        // Check if month is October
        if (month == "octobor" || month == "Octobor")
        {
            discountAmount = totalAmount * 0.10;  // 10% discount
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
        // Check if month is March
        else if (month == "march" || month == "March")
        {
            discountAmount = totalAmount * 0.10;  // 10% discount
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
        // Check if month is August
        else if (month == "August" || month == "august")
        {
            discountAmount = totalAmount * 0.10;  // 10% discount
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
    }

    // Check for Monday discounts
    if (day == "monday" || day == "Monday")
    {
        // Check if month is November
        if (month == "novemberr" || month == "November")
        {
            discountAmount = totalAmount * 0.05;  // 5% discount
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
        // Check if month is December
        else if (month == "december" || month == "December")
        {
            discountAmount = totalAmount * 0.05;  // 5% discount
            discountedAmount = totalAmount - discountAmount;
            cout << "The discounted amount: " << discountedAmount;
        }
    }
    else
    {
        // If no matching discount conditions, show this message
        cout << "The discount is not available.";
    }

    return 0;
}

