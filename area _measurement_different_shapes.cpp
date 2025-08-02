// Program: Shape Area Calculator
// Description: This program calculates the area of a square, rectangle, circle, or triangle based on user input.
// Author: Umi E Ruman
// Date: 15 march 2025
// Goal: To become  1 percent better everday

#include<iostream>
using namespace std;

int main()
{  
    string shape;        // To store the shape name
    float area;          // To store calculated area
    int length;          // Length for square/rectangle
    int radius;          // Radius for circle
    float height;        // Height for triangle
    float breadth;       // Breadth for triangle
    int width;           // Width for rectangle
    const float pi = 3.14; // Constant value of Pi for circle area calculation

    // Asking the user for the shape
    cout << "Enter shape (square / rectangle / circle / triangle): ";
    cin >> shape;

    // If shape is a square
    if(shape == "square")
    { 
        cout << "Enter the length: ";
        cin >> length;
        area = length * length; // Area of square
        cout << "Area of square: " << area;
    }
    // If shape is a rectangle
    else if(shape == "rectangle")
    { 
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        area = length * width; // Area of rectangle
        cout << "Area of rectangle: " << area;
    }
    // If shape is a circle
    else if(shape == "circle")
    { 
        cout << "Enter radius: ";
        cin >> radius;
        area = pi * radius * radius; // Area of circle
        cout << "Area of circle: " << area;
    }
    // If shape is a triangle
    else if(shape == "triangle")
    { 
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter breadth: ";
        cin >> breadth;
        area = 0.5 * height * breadth; // Area of triangle
        cout << "Area of triangle: " << area;
        return 0;
    }
}
