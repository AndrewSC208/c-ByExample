// This program inputs words and prints them on separate lines
// until you enter "quit" or when end of file (EOF) is detected.
// "quit" is not printed.
// To test EOF, redirect the input to a file, e.g.
//
//   string2 < file.txt
//
// or from the keyboard, type Ctrl-Z (Ctrl-D in Linux/UNIX).
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter some text. To quit, enter \"quit\" or type Ctrl-z\n";
    string s;

    while (cin >> s && s != "quit") {
        cout << s << endl;
    }

    return 0;
}

/* Notes:

- The expression (cin >> s) is true if input was successful. It will fail at EOF and return false.
- && and || are short circuit operators.  If the result is known from just the left side, then the right side is not evaluated.  The order is important here because s must be input before it can be compared.
- The input and output operators have higher precedence than the logical operators, so no parenthesis are needed.  The order from highest to lowest is:

     ++ -- - (unary negation) ! (not)
     * / %   (arithmetic)
     + -
     >> <<   (input, output)
     < <= > >=  (comparison)
     == !=
     &&      (logical)
     ||
     =       (assignment)
*/