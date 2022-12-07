
#include <iostream>
#include "Angle.h"

/******************************************
 * ANGLE : setDegrees
 *       Sets our public var to radian passed in
 *****************************************/
void Angle::setDegrees(double d)
{
    double degreesToRadians = convertToRadians(d);
    angleInRadians = degreesToRadians;
}
/******************************************
 * ANGLE : setRadians
 *       Sets our public var to radian passed in
 *****************************************/
void Angle::setRadians(double r)
{
    angleInRadians = r;
}

/******************************************
 * ANGLE : getDegrees
 *       returns the angle in degrees
 *****************************************/
double Angle::getDegrees() const
{
    double angleInDegrees = convertToDegrees(angleInRadians);
    return angleInDegrees;
}

/******************************************
 * ANGLE : getRadians
 *       returns the angle in radians
 *****************************************/
double Angle::getRadians() const
{
    return angleInRadians;
}

/******************************************
 * ANGLE : display
 *       Displays in degrees
 *****************************************/
void Angle::display() const
{
    double d = convertToDegrees(angleInRadians);
    cout << normalize(d);
}

/******************************************
 * ANGLE : convertToDegrees
 *       converts radians to degrees
 *****************************************/
double Angle::convertToDegrees(double radians) const
{
    double degrees = radians * 180 / M_PI;
    return degrees;
}

/******************************************
 * ANGLE : convertToRadians
 *       converts degrees to radians
 *****************************************/
double Angle::convertToRadians(double degrees) const
{
    double radians = degrees * M_PI / 180;
    return radians;
}

/******************************************
 * ANGLE : normalize
 *       keeps the angle between 0 and 360
 *****************************************/
double Angle::normalize(double angle) const
{
    if (angle >= 360)
    {
        return angle - 360;
    }
    else if (angle / M_PI == static_cast<int>(angle / M_PI)) // checks for a whole number
    {
        return M_PI;
    }
    else if (angle < 0)
    {
        return angle + 360;
    }
    else
    {
        return angle;
    }
}

Angle& operator++(Angle& num)
{
    num.angle += 1.0;
    // return new value
    return num;
}

Angle operator++(Angle& num,
    int postfix)
{
    Angle numReturn(num);
    num.value += 1.0;
    // return old value
    return numReturn;
}

Angle& operator--(Angle& num)
{
    num.angle -= 1.0;
    // return new value
    return num;
}

Angle operator--(Angle& num,
    int postfix)
{
    Angle numReturn(num);
    num.value -= 1.0;
    // return old value
    return numReturn;
}


