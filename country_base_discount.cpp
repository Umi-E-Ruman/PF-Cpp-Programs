// Program: Ticket Price Discount Calculator
// Description: This program calculates a discounted ticket price based on the user's country. 
//              If the country is "Ireland", a 10% discount is applied; otherwise, a 5% discount is applied.
// Author: Umi E Ruman
// Date: 15 March 2025
// Goal: To become 1 percent better everyday

#include<iostream>
using namespace std;

int main()
{
    string country;          // To store country name
    int ticketPrice;         // Original ticket price
    int discount;            // Discount amount
    int discountedPrice;     // Final price after discount

    // Taking user input
    cout << "Enter country name: ";
    cin >> country;
    cout << "Enter ticket price: ";
    cin >> ticketPrice;

    // If the country is Ireland (spelling corrected)
    if(country == "Ireland")
    {
        discount = 10 * ticketPrice / 100;  // 10% discount
        discountedPrice = ticketPrice - discount;
        cout << "Discounted price: " << discountedPrice;
    }
    else 
    {
        discount = 5 * ticketPrice / 100;   // 5% discount
        discountedPrice = ticketPrice - discount;
        cout << "Discounted price: " << discountedPrice;
    }

    return 0;
}
