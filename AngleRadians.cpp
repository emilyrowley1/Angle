#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h> 
#pragma once
using namespace std;

/*******************************************************
 * Angle which represents an angle.
 * This class will have one attribute: an angle in radians.
 *******************************************************/
class AngleRadians : public Angle
{
public:
    // Default constructor
    AngleRadians() : Angle() {}

    virtual void display()
    {
        cout << setprecision(2) << angleInRadians;
    }

    virtual operator++(Angle& num)
    {
        num.angle += (1/8) * M_PI;
        // return new value
        return num;
    }

    virtual operator++(Angle& num,
        int postfix)
    {
        Angle numReturn(num);
        num.value += (1 / 8) * M_PI;
        // return old value
        return numReturn;
    }

    virtual operator--(Angle& num)
    {
        num.angle -= (1 / 8) * M_PI;
        // return new value
        return num;
    }

    virtual operator--(Angle& num,
        int postfix)
    {
        Angle numReturn(num);
        num.value -= (1 / 8) * M_PI;
        // return old value
        return numReturn;
    }
}