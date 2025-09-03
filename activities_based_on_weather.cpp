// Problem: Activity Suggestion Based on Temperature and Humidity
// Description: 
//   This program suggests an activity depending on the entered 
//   temperature and humidity conditions.
//   - If temperature is "warm" and humidity is "dry", it suggests playing tennis.
//   - If temperature is "warm" and humidity is "humid", it suggests swimming.
//   - If temperature is "cold" and humidity is "dry", it suggests playing basketball.
//   - If temperature is "cold" and humidity is "humid", it suggests watching TV.
//
// Author: Umi E Ruman
// Date:   20-08-2025
// Goal:   To become one percent better everyday


#include <iostream>
using namespace std;

int main() 
{
    // Variables to store user inputs
    string temperature, humidity;

    // Ask user for temperature
    cout << "Enter temperature (warm/cold): ";
    cin >> temperature;

    // Ask user for humidity
    cout << "Enter humidity (dry/humid): ";
    cin >> humidity;

    // Decision-making using if-else statements
    if (temperature == "warm" && humidity == "dry") 
    {
        cout << "Suggested Activity: Play tennis" << endl;
    } 
    else if (temperature == "warm" && humidity == "humid")
    {
        cout << "Suggested Activity: Swim" << endl;
    } 
    else if (temperature == "cold" && humidity == "dry")
    {
        cout << "Suggested Activity: Play basketball" << endl;
    } 
    else if (temperature == "cold" && humidity == "humid")
    {
        cout << "Suggested Activity: Watch TV" << endl;
    }
    else
    {
        cout << "Suggested Activity: Invalid input provided" << endl;
    }

    return 0; // Program ends successfully
}
