// Problem: Fruit Shop Price Calculator
// Description: This program calculates the price of a fruit purchase 
//              based on the type of fruit, the day of the week, and the quantity.
//              Weekday and weekend prices differ. If an invalid fruit or day is entered,
//              the program outputs "error".
// Author: Umi E Ruman
// Date: 22-03-2025
// Goal: To become one percent better everyday

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string fruit;
    string  day;
    double quantity;
    double price = 0.0;
      bool isValid = true; // flag to check invalid input

    // Input from user
    cout << "Enter fruit name: ";
    cin >> fruit;
    cout << "Enter day of the week: ";
    cin >> day;
    cout << "Enter quantity: ";
    cin >> quantity;

  \

    // Check if the day is weekday or weekend
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" ||
        day == "Thursday" || day == "Friday") 
    {
        // Weekday prices
        if (fruit == "banana") 
        price = 2.50;
        else if (fruit == "apple") 
        price = 1.20;
        else if (fruit == "orange") 
        price = 0.85;
        else if (fruit == "grapefruit") 
        price = 1.45;
        else if (fruit == "kiwi") 
        price = 2.70;
        else if (fruit == "pineapple")
         price = 5.50;
        else if (fruit == "grapes") 
        price = 3.85;
        else 
        isValid = false; // invalid fruit
    }
    else if (day == "Saturday" || day == "Sunday") 
    {
        // Weekend prices
        if (fruit == "banana") 
        price = 2.70;
        else if (fruit == "apple") 
        price = 1.25;
        else if (fruit == "orange") 
        price = 0.90;
        else if (fruit == "grapefruit") 
        price = 1.60;
        else if (fruit == "kiwi") 
        price = 3.00;
        else if (fruit == "pineapple")
         price = 5.60;
        else if (fruit == "grapes")
         price = 4.20;
        else isValid = false; // invalid fruit
    }
    else 
    {
        isValid = false; // invalid day
    }

    // Output
    if (isValid) 
    {
        cout << (price * quantity) << endl;
    } 
    else 
    {
        cout << "error" << endl;
    }

    return 0; // program run successfully
}
