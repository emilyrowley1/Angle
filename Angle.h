
#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h> 
#pragma once
using namespace std;

/*******************************************************
 * Angle which represents an angle.
 * This class will have one attribute: an angle in radians.
 *******************************************************/
class Angle
{

public:
    // Only attribute of the class
    double angleInRadians;

    // Default constructor
    Angle() {}
    // Copy consturctor
    Angle(const Angle& rhs) : angleInRadians(rhs.angleInRadians) {}
    // non-default consturctor
    Angle(double angleInR) : angleInRadians(angleInR) {}

    // Set degrees to radians
    void setDegrees(double d); 
    // Sets our public var to radian passed in
    void setRadians(double r);

    // Get value from radians and convert to degrees
    double getDegrees() const;
    // Get attribute
    double getRadians() const;

    // Displays in degrees
    virtual void display() const;

    virtual void &operator++();
    virtual void operator++();
    virtual void& operator--();
    virtual void operator--();


private:
    // Radians to degrees
    double convertToDegrees(double radians) const;

    // Degrees to Radians
    double convertToRadians(double degrees) const;

    // Keeps the angle between 0 and 360
    double normalize(double angle) const;
};


