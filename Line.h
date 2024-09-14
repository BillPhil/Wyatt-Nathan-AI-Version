/* Create your Line class header code here */


#include "Point.h"

    // Line.h
#ifndef LINE_H
#define LINE_H

class lineType{
private:
    double a, b, c;

public:

    // Default constructor
    lineType();

    // Parameterized constructor
    lineType(double aVal, double bVal, double cVal);

    // Function to obtain the slope of the line
    double slope() const;

    // Equality operator overload
    bool operator==(const lineType& other) const;

    // Subtraction operator overload to calculate distance between points
    double operator-(const lineType& other) const;

    // || operator overload to check if two lines are parallel
    bool operator||(const lineType& other) const;

    // | operator overload to check if two lines are perpendicular
    bool operator|(const lineType& other) const;

    // Function to obtain the line information
    void print() const;

};

#endif