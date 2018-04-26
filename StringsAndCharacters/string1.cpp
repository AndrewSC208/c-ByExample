// This program inputs words in prints them on a separate lines until you enter "quit"
#include <iostream>
#include <string> // defines type string
using namespace std;

int main() {
    cout << "Enter some text. To quit, enter \"quit\"\n";
    string s; // a sequence of characters, initially ""
    do {
        cin >> s;
        cout << s << endl;
    } while(s != "quit");

    return 0;
}

/* Notes:

- To print a quote mark, use \" to distinguish from the end of the string.
- The input operator >> inputs words separated by white space. Thus "quit!" will not quit because "!" is part of the word.
- Comparison is case sensitive, so "QUIT" will not work.
- You can use all the comparison operators: == != < <= > >=f
*/