// This program reads a line at a time and prints it.
// To test, redirect input from a file, e.g string < file.txt
// You can copy a text file like this: string3 < input > output
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        cout << s << "\n";
    }
    return 0;
}

/* Notes:
 getline(cin, s) reads a line of input up to a newline and discards the newline.
 Unlike >> it reads spaces, tabs, and blank lines (returned as "").
 It does not save the trailing newline in s.
 It returns true if a line was read, false at EOF.
*/