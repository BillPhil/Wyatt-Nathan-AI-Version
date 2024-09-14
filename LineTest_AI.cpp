#include <iostream>
#include <cmath>
#include "Line.h"  // Include the header file for the lineType class
#include "Point.h"

using namespace std;


int main() {
    // Test default constructor
    cout << "Testing default constructor..." << endl;
    lineType line1;
    line1.print();

    // Test parameterized constructor
    cout << "\nTesting parameterized constructor..." << endl;
    lineType line2(1, -2, 3);
    line2.print();

    // Test slope calculation
    try {
        cout << "\nTesting slope calculation..." << endl;
        cout << "Slope of line2: " << line2.slope() << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    // Test equality operator (==)
    cout << "\nTesting equality operator..." << endl;
    lineType line3(2, -4, 6); // Should be equal to line2 when scaled
    cout << "line2 == line3: " << (line2 == line3 ? "True" : "False") << endl;

    // Test parallel operator (||)
    cout << "\nTesting parallel operator..." << endl;
    lineType line4(2, -4, 7); // Parallel to line2
    cout << "line2 || line4: " << (line2 || line4 ? "True" : "False") << endl;

    // Test perpendicular operator (|)
    cout << "\nTesting perpendicular operator..." << endl;
    lineType line5(-2, -1, 0); // Perpendicular to line2
    cout << "line2 | line5: " << (line2 | line5 ? "True" : "False") << endl;

    // Final test summary
    cout << "\nAll tests completed successfully." << endl;

    return 0;
}
