// This program outputs the numbers 1 2 3 ... 10
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 10) {
        cout << i << " ";
        i = i + 1;
    }
    cout << endl;

    int j = 1;
    while(j <= 100) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    return 0;
}

/* Notes:

- The general form of the "while" loop is

  while (...)
  {
    ...;
    ...;
  }

It repeats 0 or more times, as long as (...) is true.

- If there is only one statement in the block, then the
  braces are optional.
*/
