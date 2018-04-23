// This program inputs 2 floating point numbers and prints:
// sum, difference, product, and quotient.
// The input numbers may contain decimal points.
#include <iostream>
using namespace std;

int main() {
    // get 2 numbers from user
    double a = 0.0, b = 0.0; // creates two floating point numbers
    cout << "Enter two numbers (decimal points OK): ";
    cin >> a >> b;

    // do some math:
    cout << a << "+" << b << "=" << a + b << endl;  // add
    cout << a << "-" << b << "=" << a - b << endl;  // subtract
    cout << a << "*" << b << "=" << a * b << endl;  // multiply
    cout << a << "/" << b << "=" << a / b << endl;  // divide

    return 0;
}

/* Notes:

- There is no % remainder operator.
- Arithmetic is accurate to about 14 significant digits, although
  only 6 digits are displayed.
- Exponential notation is OK, e.g. 3.2e-4 is 0.00032.
- A double has a range of about +/- 1.7e308.  Results outside
  this range will be incorrect (including division by 0).
- Any invalid characters (like letters) cause further input to fail.
*/