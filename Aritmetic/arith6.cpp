// This program computes pi to 16 decimal places (15 correct)
// using 5 different methods

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // compute using trig identities
    cout << setw(20) << setprecision(17) << 2*acos(0.0) << endl;
    cout << setw(20) << 4*atan(1.0) << endl;

    // compute using Machin's method
    cout << setw(20) << 16*atan(1/5.0)-4*atan(1.0/239) << endl;
    cout << setw(20) << 16*atan2(1.0, 5.0)-4*atan2(1.0, 239.0) << endl;

    // compute using spigot algorithm
    double pi = 4.0;
    int i = 52;
    while (i > 0) {
        pi = 2 + pi * i / (2 * i + 1);
        i = i - 1;
    }

    cout << setw(20) << pi << endl;

    return 0;
}

/* Notes:

- The actual value of pi to 16 decimal places is 3.1415926535897932
  Note that the last digit is usually wrong because floating point
  arithmetic is only accurate to about 15 significant digits.

- setw(n) says to print the next object with at least n characters,
  padding with spaces on the left.

- setprecision(n) says to print all doubles with n significant digits
  (before and after the decimal point).  It remains in effect until
  changes (unlike setw).

- setprecision(n) in g++ ignores n higher than 17.

- acos(x) is the inverse cosine in radians.

- atan(x) is the inverse tangent in radians.

- atan2(y, x) is the inverse tangent of y/x in radians.

- In the spigot algorithm, the initial value of i is the desired
  accuracy in bits.  A decimal digit is log(10)/log(2) ~ 3.32 bits.
  Thus, i = 52 requests about 15.6 digits of accuracy.

- The statement:

    while (...)
    {
      ...;
      ...;
    }

  repeats the contents of the block {...} while the condition (...) is
  true.  The loop repeats 0 or more times.  When the condition is false,
  the block is skipped and execution continues from there.  In this
  program, the block repeats 52 times with i going from 52 down to 1.
*/