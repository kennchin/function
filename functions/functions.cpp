// This menu-driven program finds areas of squares, 
// circles, and right triangles.
// It modifies the Lab 4 areas.cpp program to use a do-while loop.
// Kenneth Chin.

#include "stdafx.h"
#include <iostream>
using namespace std;

const double PI = 3.14159;

//function prototypes
void displayMenu();
void findSquareArea();
void findCircleArea();
void findTriangleArea();

int main()
{  
	int choice;           // User's menu choice

	do
    {
      // Display the menu
      displayMenu();

      cin >> choice;
   
      // Find and display the area of the user's chosen object
      if (choice == 1)                              // square
      { 
		  findSquareArea();
      }
      else if (choice == 2)                         // circle
      {  
		  findCircleArea();
      }
      else if (choice == 3)                         // right triangle
      {  
		  findTriangleArea();
      }
      else if (choice != 4)
         cout << "Choice must be 1, 2, 3, or 4.\n";
   } while (choice != 4);


	return 0;
}

//function to display menu-displayMenu()
void displayMenu()
{
	   // Display the menu
       cout << "\n\nProgram to calculate areas of different objects \n\n";
       cout << "        1 -- square \n"
            << "        2 -- circle \n"
            << "        3 -- right triangle \n"
            << "        4 -- quit \n\n";

}
//function to find area of square-findSquareArea()
void findSquareArea()
{
	 double side;				// Length of a side of a square
	 double area_square;		//Area of a square

	 cout << "Length of the square's side: ";
     cin  >> side;
     area_square = side * side;
     cout << "Area = " << area_square << endl;
}
//function to find the area of circle-findCircleArea()
void findCircleArea()
{
	double radius;			// Radius of a circle
	double area_circle;		// Area of a circle 

	cout << "Radius of the circle: ";
    cin  >> radius;
    area_circle = PI * radius * radius;
    cout << "Area = " << area_circle << endl;

}
//function to find the area of a triangle-findTriangleArea()
void findTriangleArea()
{
	double base;          // Length of base of a right triangle
    double height;        // Height of a right triangle
	double area_triangle; // Area of a triangle

	cout << "Base of the triangle: ";
    cin  >> base;
    cout << "Height of the triangle: ";
    cin  >> height;
    area_triangle = .5 * base * height;
    cout << "Area = " << area_triangle << endl;

}