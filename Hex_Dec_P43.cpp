// To display hexadecimal integer literals and
// decimal integer literals.
//
#include <iostream>
using namespace std;
string myStr("Hello World");
int main()
{
    // cout outputs integers as decimal integers:
    cout << "Value of 0xFF = " << 0xFF << " decimal"
         << endl;
    // Output: 255 decimal

    // The manipulator hex changes output to hexadecimal
    // format (dec changes to decimal format):
    cout << "Value of 27 = " << hex << 27 << " hexadecimal"
         << endl;
    // Output: 1b hexadecimal

    cout << myStr << endl;
    return 0;
}
