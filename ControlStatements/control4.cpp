// This program prints 1 2 3 ... 10
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i = i + 1;
    } while(i <= 10);

    cout << endl;

    return 0;
}

/* Notes:

- A "do" loop repeats 1 or more times. A "while" loop repeats 0 or more times.
- The general form of the "do" loop is
- If there is only one statement in the block, then the braces are optional.

  do
  {
    ...;
    ...;
  }
  while (...);

*/