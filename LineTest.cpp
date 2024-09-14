/* Write a program to fully test you Line Class here */

#include <iostream>
#include "Line.h"

int main() {
    lineType line1(1.0, 2.0, 3.0);
    lineType line2(2.0, 4.0, 6.0);
    lineType line3(2.0, -1.0, 0.0);
    lineType line4(1.0, 0.0, 3.0);
    lineType line5(-2.0, 0.0, -1.0);

    line1.print();
    line4.print();

    line1.slope();
    line5.slope();

    bool equalityTestPass = line1==line1;
    bool equalityTestFail = line1==line2;

    std::cout << "Equality Test Pass: " << equalityTestPass << std::endl;
    std::cout << "Equality Test Fail: " << equalityTestFail << std::endl;

    bool parallelTestPass = line1||line2;
    bool parallelTestFail = line1||line3;
    bool perpendicularTestPass = line1|line3;
    bool perpendicularTestFail = line1|line2;

    std::cout << "Paralell Test Pass: " << parallelTestPass  << std::endl;
    std::cout << "Paralell Test Fail: " << parallelTestFail  << std::endl;
    std::cout << "Perpendicular Test Pass: " << perpendicularTestPass  << std::endl;
    std::cout << "Perpendicular Test Fail: " << perpendicularTestFail  << std::endl;


    std::cout << "test" << std::endl;
}
