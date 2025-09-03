// Problem: Student Grade Calculator
// Description: 
//   This program takes a student's name and marks in 5 subjects
//   (English, Maths, Chemistry, Social Science, Biology).  
//   It calculates the total marks, percentage, and assigns a grade 
//   based on the percentage range.
//   Grading Scheme:
//     90% and above    = A+
//     80% - 89%        = A
//     70% - 79%        = B+
//     60% - 69%        = B
//     50% - 59%        = C
//     40% - 49%        = D
//     Below 40%        = F
//
// Author: Umi E Ruman
// Date:   22-03-2025
// Goal:   To become one percent better everyday


#include <iostream>
using namespace std;

int main() 
{
    // Variables to store name and subject marks
    string name;
    int english, maths, chemistry, socialScience, biology;
    int totalMarks;
    float percentage;

    // Input student details
    cout << "Enter student name: ";
    cin >> name;

    // Input marks for 5 subjects
    cout << "Enter marks for English (out of 100): ";
    cin >> english;
    cout << "Enter marks for Maths (out of 100): ";
    cin >> maths;
    cout << "Enter marks for Chemistry (out of 100): ";
    cin >> chemistry;
    cout << "Enter marks for Social Science (out of 100): ";
    cin >> socialScience;
    cout << "Enter marks for Biology (out of 100): ";
    cin >> biology;

    // Calculate total marks and percentage
    totalMarks = english + maths + chemistry + socialScience + biology;
    percentage = (float)totalMarks / 500 * 100;

    // Determine grade based on percentage
    char grade;
    if (percentage >= 90) 
        grade = 'A+';
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70) 
        grade = 'B+';
    else if (percentage >= 60)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else 
        grade = 'F';

    // Display results
    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << totalMarks << " out of 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0; // Program ends successfully
}
