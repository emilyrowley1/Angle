/*************************************************************
 * 1. Name:
 *      Emily Wayment and Tyler Aston
 * 2. Assignment Name:
 *      PRACTICE 05 : ANGLE CLASS
 * 3. Assignment Description:
 *      Get familar with classes and constructors.
 * 4. What was the hardest part? Be as specific as possible.
 *      Working as a team remotely.
 * 5. How long did it take for you to complete the assignment?
 *      This took us a little over 1 hour of group work.
 *****************************************************************/


/************************************
 * MAIN
 * This is the start of our program, takes no args.
 ************************************/
#include <iostream>
#include "Angle.h"

int main()
{
    // Initialize object
    Angle angle;

    // Getters and Setters
    // Radians
    cout << "-----Get and set radians-----" << endl << "SET'1'  and use display method - 1 Radian in degrees: ";
    angle.setRadians(1); //
    angle.display();
    cout << endl << "GET: Value stored from setter(in radians): ";
    double r = angle.getRadians();
    cout << r << endl;
    // Degrees
    cout << endl << "-----Get and set degrees-----" << endl << "SET'60' and use display method - 60 degrees: ";
    angle.setDegrees(60);
    angle.display();
    cout << endl << "GET: Value stored from setter(in degrees): ";
    double d = angle.getDegrees();
    cout << d << endl;

    // Test cases for Normalize method
    // Test 1
    cout << endl << "--------Use Normalize--------" << endl << "Normalize 366: ";
    angle.setDegrees(366);
    angle.display();
    // Test 2
    cout << endl << "Normalize 3 pie: ";
    angle.setDegrees(3 * M_PI);
    angle.display();
    // Test 3
    cout << endl << "Normalize -9: ";
    angle.setDegrees(-9);
    angle.display();

}