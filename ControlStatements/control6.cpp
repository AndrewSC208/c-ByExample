// This program asks the user for a width and height and draws a box.
// For example, if the user enters "6 4" it outputs:
//
// ######
// #    #
// #    #
// ######
#include <iostream>
using namespace std;

int main() {
    // Get width and height
    int width, height;
    cout << "Enter width and height of a box to draw: ";
    cin >> width >> height;

    // Draw box:
    for(int i = 0; i < height; ++i) {

        for(int j = 0; j < width; ++j) {

            if(i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << '#';
            } else {
                cout << ' ';
            }

        }
        cout << endl;
    }

    return 0;
}

/* Notes:

- ++i means i = i + 1
- Likewise, --i means i = i - 1
- In this program, i is the row number (from 0 to height - 1)
  and j is the column number (from 0 to width - 1).  The "if"
  statement tests whether i and j are on the edge of the
  rectangle.
- All of the control statements (if, while, do, for) can be nested.
- Indentation rules apply.  Note that matching braces line up
  with each other and the surrounding code.  This is very
  important with nested blocks.
*/