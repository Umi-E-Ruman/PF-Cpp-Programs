// Program: Flower Shop Bill Calculator
// Description: This program calculates the total cost of buying red roses, white roses, and tulips. 
//              If the total exceeds 200, a 20% discount is applied.
// Author: Umi E Ruman
// Date: 15 March 2025
// Goal: To become 1 percent better everyday

#include<iostream>
using namespace std;

int main()
{ 
    // Variables for flower quantities
    int redRoses;
    int whiteRoses;
    int tulip;

    // Prices of flowers
    float redRosesPrice = 2.00;
    float whiteRosesPrice = 4.10;
    float tulipPrice = 2.50;

    // Variables for discount calculation
    float discount;
    float discountedPrice;
    float total;

    // Taking input for quantities
    cout << "Enter number of Red roses: ";
    cin >> redRoses;
    cout << "Enter number of White roses: ";
    cin >> whiteRoses;
    cout << "Enter number of Tulips: ";
    cin >> tulip;

    // Calculating total cost
    total = redRoses * redRosesPrice + whiteRoses * whiteRosesPrice + tulip * tulipPrice;
    cout << "Total: " << total << endl;

    // Applying discount if total exceeds 200
    if(total > 200)
    {
        discount = 20 * total / 100;           // 20% discount
        discountedPrice = total - discount;    // Final price after discount
        cout << "Discounted price: " << discountedPrice;
    }

    return 0;
}


}
