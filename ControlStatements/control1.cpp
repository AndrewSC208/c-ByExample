// This program inputs two integers and prints the results
// of comparing them using the 6 comparison operators.
#include <iostream>
using namespace std;

int main() {
    // read two numbers
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // compare them
    if(a == b)
        cout << a << "==" << b << endl; // equal

    if(a != b)
        cout << a << "!=" << b << endl; // not equal

    if(a < b)
        cout << a << "<"  << b << endl; // less than

    if(a > b)
        cout << a << ">"  << b << endl; // greater than

    if(a <= b)
        cout << a << "<=" << b << endl; // less or equal

    if(a >= b)
        cout << a << ">=" << b << endl; // greater or equal

    return 0;
}

/* Notes:

- The general form of the "if" statement is:

  if (...)
  {
    ...;
    ...;
  }
  else if (...)
  {
    ...;
    ...;
  }
  else if (...)
  {
    ...;
    ...;
  }
  else
  {
    ...;
    ...;
  }

- The expressions (...) are true or false.
- The block after the first true expression is executed.
- At most one of the blocks will be executed.
- There may be 0 or more "else if" parts.
- The final "else" part is optional.
- The code inside the blocks is indented as usual.
- If a block has only one statement, then the braces are optional
  but the code inside is still indented.
- There is no semicolon after (...) or after the braces.

*/