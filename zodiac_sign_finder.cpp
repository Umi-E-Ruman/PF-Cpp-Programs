// Problem: Zodiac Sign Finder
// Description: 
//   This program takes the user's birth day and month as input 
//   and determines their zodiac sign based on standard zodiac 
//   date ranges.
//
//   Zodiac Ranges:
//     Aries        : Mar 21 – Apr 19
//     Taurus       : Apr 20 – May 20
//     Gemini       : May 21 – Jun 20
//     Cancer       : Jun 21 – Jul 22
//     Leo          : Jul 23 – Aug 22
//     Virgo        : Aug 23 – Sep 22
//     Libra        : Sep 23 – Oct 22
//     Scorpio      : Oct 23 – Nov 21
//     Sagittarius  : Nov 22 – Dec 21
//     Capricorn    : Dec 22 – Jan 19
//     Aquarius     : Jan 20 – Feb 18
//     Pisces       : Feb 19 – Mar 20
//
// Author: Umi E Ruman
// Date:   20-08-2025
// Goal:   To become one percent better everyday


#include <iostream>
using namespace std;

int main()
{
    // Variables to store day and month of birth
    int day, month;

    // Take input from user
    cout << "Enter day of birth (1-31): ";
    cin >> day;
    cout << "Enter month of birth (1-12): ";
    cin >> month;

    string zodiacSign;

    // Determine zodiac sign based on date ranges
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) 
    {
        zodiacSign = "Aries";
    } 
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
    {
        zodiacSign = "Taurus";
    } 
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) 
    {
        zodiacSign = "Gemini";
    } 
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) 
    {
        zodiacSign = "Cancer";
    } 
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
    {
        zodiacSign = "Leo";
    } 
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
    {
        zodiacSign = "Virgo";
    } 
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
    {
        zodiacSign = "Libra";
    } 
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
    {
        zodiacSign = "Scorpio";
    } 
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) 
    {
        zodiacSign = "Sagittarius";
    } 
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) 
    {
        zodiacSign = "Capricorn";
    } 
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) 
    {
        zodiacSign = "Aquarius";
    } 
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) 
    {
        zodiacSign = "Pisces";
    }

    // Output the zodiac sign
    cout << endl;
    cout << "Your zodiac sign is: " << zodiacSign << endl;

    return 0; // Program ends successfully
}
