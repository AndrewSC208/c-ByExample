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