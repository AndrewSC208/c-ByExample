// This program prints 1 2 3 ... 10
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(true) { // loop forever?
        cout << i++ << " ";
        if(i > 10)
            break;
    }

    cout << "\n";
    return 0;
}

/* Notes:

- true and false are the two possible values of type bool.

- i++ is called a "post increment".  It adds 1 to i like ++i
  but the value of the expression (what is printed) is the
  value before the increment.  Likewise, i-- subtracts 1 after
  the old value is used.

- break in a nested loop will only jump out of the innermost loop.
*/