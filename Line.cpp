/*This program was written by Wyatt Phillips and Nathan Le.

The Line program allows the user to obtain different properties of a line in the xy-coordinate system and help the user 
compare the lines with one another in terms of relative positions, such as parallel or perpendicular. This was achieved by 
the creation of the lineType class, with constructors allowing the user to input the parameters of the line, as well as 
overridden operators that helps the user see if two lines are parallel or perpendicular. The program also used a pointer 
to obtain the address where two lines intersect, and printing out the line information when called for.

Each person participating in the production of this program contributed equally in the development, and both followed the guidelines
for Pair Programming.*/



/* Code you line class implementation here.*/

#include "Line.h"
#include "Point.h"
#include <cmath>
#include <iostream>

// Default constructor
lineType::lineType() : a(1.0), b(1.0), c(1.0) {}

// Parameterized constructor
lineType::lineType(double aVal, double bVal, double cVal) : a(aVal), b(bVal), c(cVal) {}


// Function to overload equality operator
/*
    * Precondition: nothing
    * Postcondition: returns true if the two lines are equal
    * @params: a, b, c values of line 1
    * @ params: other.a, other.b, other.c values of line 2

*/
bool lineType::operator==(const lineType& other) const {
    return (a == other.a) && (b == other.b) && (c == other.c);
}

/*Function to overload operator || for parallel lines

    * Precondition: the lines have the same slope. THis can be either achieved through
    the fact that the slopes (-a/b) of the two are equal, or that they are both vertical lines
    (b=0)
    * Postcondition: returns value True if the two lines are parallel
    * @param a and b are parameters of line 1
    * @param other.a and other.b are parameters of line 2
*/

bool lineType::operator||(const lineType& other) const {
    if (b != 0 && other.b != 0 && -a/b == -other.a/other.b){
        return true;
    }   
    else if(b == 0 && other.b == 0){
        return true;
    }
    else {
        return false;
    }
}


// Function to overload the | operator

/*  * Precondition: the two lines are perpendicular. 
    This is either achievable if one of the line is vertical (b=0) and the other is
    horizontal (a=0), or if the product of their slopes is -1.
    * Postcondition: return true if the two lines are perpendicular.
    * @param a and b are parameters of line 1.
    * @param other.a and other.b are parameters of line 2.
*/

bool lineType::operator|(const lineType& other) const{
    if (a == 0 && other.b == 0){
        return true;
    }
    else if (b == 0 && other.a == 0){
        return true;
    }
    else if (b != 0 && other.b != 0 && (-a/b)*(-other.a/other.b) == -1){
        return true;
    }
    else{
        return false;
    }


// Print function that gives information about the line

/* Function to print the information about the line
    * Precondition: none - we just need the line
    * Postcondition: returns the value of the line's parameters
    * @param a, b, c that are parameters of the line.

*/
}

void lineType::print() const {
   std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;
    std::cout << "c:" << c << std::endl;
}

double lineType::slope() const {
    if (b==0){
        std::cout << "Line is vertical, slope is undefined" << std::endl;
        return 0;
    }
    else {
        return (-a/b);
    }
}


/* We were unsuccessful in getting the intersect function to work
    with the pointers, but we have written the intersect function here.
*/

/*void lineType::intersect(const lineType& other) {
    double det = a * other.b - other.a * b
    if (det == 0) {
         //Lines are parallel
    } else {
        double x = (other.b * c - b * other.c) / det
        double y = (a * other.c - other.a * c) / det
    }
    return new Point (x,y);
    }*/



