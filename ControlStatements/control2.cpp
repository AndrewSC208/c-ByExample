// This program inputs 3 integers and reports if any 2 or all 3 are the same.
#include <iostream>
using namespace std;

int main() {
    // get 3 ints from user
    int a, b, c;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;

    // compare them
    if(a == b && b == c) {
        cout << "All 3 numbers are equal\n";
    } else if (a == b || b == c || a == c) {
        cout << "Two of the numbers are the same\n";
    } else {
        cout << "The numbers are all different\n";
    }

    return 0;
}

/*
- && means and.
- || means or.
- The braces in this example could have been omitted.
- Operator precedence order is arithmetic, comparison, logical. Thus, no extra parenthesis are needed.
- Be wary of writing

if (a = b)

That is an assignment, not a comparison.  Most compilers will
not warn you about this error.  The effect would be to assign
b to a and evaluate as true if the new value is not 0.
*/