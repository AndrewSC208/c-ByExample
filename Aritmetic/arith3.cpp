// this program prints some expressions to illustrate rules of precedence.
#include <iostream>
using namespace std;

int main() {
    // Operators * / % have higher precedence than + or -
    cout << "(2+3)*4 = " << (2+3)*4 << endl;
    cout << "2+(3*4) = " << 2+(3*4) << endl;
    cout << "2+3*4   = " << 2+3*4   << endl;
    cout << endl;

    // Operators at the same precedence level evaluate left to right
    cout << "(5-1)+1 = " << (5-1)+1 << endl;
    cout << "5-(1+1) = " << 5-(1+1) << endl;
    cout << "5-1+1   = " << 5-1+1   << endl;

    return 0;
}