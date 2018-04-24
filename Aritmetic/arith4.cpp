// This program illustrates initialization and assignment
#include <iostream>
using namespace std;

int main() {
    int a = 10, b; // b is not initialized
    cout << "a=" << a << " b=" << b << endl;

    // assign some values
    a = 20;
    b = 30;
    cout << "a=" << a << " b=" << b << endl;

    return 0;
}

/**
 * Notes:
 * - The contents of b are undefined. You may get different results on different computers, or using different compilers.
 * - Many compilers will not warn you about uninitialized variables.
 */
