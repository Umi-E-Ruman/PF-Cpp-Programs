// Problem: Telephone Billing System
// Description: 
//   This program calculates the amount due for a telephone service 
//   based on the type of service chosen (Regular or Premium).
//
//   Rules:
//   - Regular Service (r/R):
//       Base rate = $10.00 for up to 50 minutes
//       Extra minutes = $0.20 per minute beyond 50
//
//   - Premium Service (p/P):
//       Base rate = $25.00
//       Daytime minutes (d/D):
//           First 75 minutes free, additional minutes = $0.10/min
//       Nighttime minutes (n/N):
//           First 100 minutes free, additional minutes = $0.05/min
//
// Author: Umi E Ruman
// Date:   20-08-2025
// Goal:   To become one percent better everyday


#include <iostream>
using namespace std;

int main() {
    char serviceCode;  // To store the type of service
    int minutesUsed;   // For regular plan minutes

    // Ask user for service type
    cout << "Enter service code (r/R for regular, p/P for premium): ";
    cin >> serviceCode;

    // Case 1: Regular service
    if (serviceCode == 'r' || serviceCode == 'R') {
        cout << "Enter number of minutes used: ";
        cin >> minutesUsed;

        double amountDue;
        // Calculate charges
        if (minutesUsed <= 50) {
            amountDue = 10.00;
        } else {
            amountDue = 10.00 + (minutesUsed - 50) * 0.20;
        }

        // Display bill
        cout << "\nService type: Regular" << endl;
        cout << "Minutes used: " << minutesUsed << endl;
        cout << "Amount due: $" << amountDue << endl;
    } 
    // Case 2: Premium service
    else if (serviceCode == 'p' || serviceCode == 'P') {
        char timeOfDay;     // To check if usage is day or night
        int dayMinutes, nightMinutes;

        cout << "Enter time of day (d/D for day, n/N for night): ";
        cin >> timeOfDay;

        // Premium daytime usage
        if (timeOfDay == 'd' || timeOfDay == 'D') {
            cout << "Enter number of minutes used during the day: ";
            cin >> dayMinutes;

            double amountDue;
            if (dayMinutes <= 75) {
                amountDue = 25.00;
            } else {
                amountDue = 25.00 + (dayMinutes - 75) * 0.10;
            }

            cout << "\nService type: Premium" << endl;
            cout << "Minutes used during the day: " << dayMinutes << endl;
            cout << "Amount due: $" << amountDue << endl;
        } 
        // Premium nighttime usage
        else if (timeOfDay == 'n' || timeOfDay == 'N') {
            cout << "Enter number of minutes used during the night: ";
            cin >> nightMinutes;

            double amountDue;
            if (nightMinutes <= 100) {
                amountDue = 25.00;
            } else {
                amountDue = 25.00 + (nightMinutes - 100) * 0.05;
            }

            cout << "\nService type: Premium" << endl;
            cout << "Minutes used during the night: " << nightMinutes << endl;
            cout << "Amount due: $" << amountDue << endl;
        } 
        else {
            cout << "Invalid time of day." << endl;
        }
    } 
    // Invalid service code
    else {
        cout << "Invalid service code." << endl;
    }

    return 0; // Program ends successfully
}
