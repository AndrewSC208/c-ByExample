// This program inputs 2 integers and prints the sum, difference,
// product, quotient, and remainder.  The input numbers cannot
// contain decimal points.  They may be entered on separate lines
// or on the same line separated by a space.

#include <iostream>
using namespace std;

int main() {
    // Get 2 integers from user
    int a = 0, b = 0; // create two ints
    cout << "Enter two numbers (no decimal points): ";
    cin >> a >> b; // input

    // do some math:
    cout << a << "+" << b << "=" << a + b << endl;  // add
    cout << a << "-" << b << "=" << a - b << endl;  // subtract
    cout << a << "*" << b << "=" << a * b << endl;  // multiply
    cout << a << "/" << b << "=" << a / b << endl;  // divide
    cout << a << "%" << b << "=" << a % b << endl;  // remainder

    return 0;
}