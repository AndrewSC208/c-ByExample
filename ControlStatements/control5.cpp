// This program prints 1 2 3 ... 10
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i = i+1) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

/* Notes:

- The general form of the "for" loop is:

  for (s1; s2; s3)
  {
    ...;
    ...;
  }

It is equivalent to

  s1;
  while (s2)
  {
    ...;
    ...;
    s3;
  }

except that if s1 is a declaration, then the variable is local
to the loop.

- If there is only one statement, as in this example, then the
  braces are optional.
*/