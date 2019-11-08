// To use strings.
#include <iostream>
#include <string>
using namespace std;
// Declaration of cin, cout
// Declaration of class string
int main()
{
    // Defines four strings:
    string prompt("What is your name: "),
        name,          // An empty string to hold the name
        line(40, '-'), // string with 40 '-' to create a line seperator
        totalConcat = "Hello ";

    cout << prompt;
    getline(cin, name);
    totalConcat += name;
    // Request for input.
    // Inputs a name in one line
    // Concatenates and
    // assigns strings.
    cout << line << endl
         // Outputs line and name
         << totalConcat << endl;
    cout << " Your name is " // Outputs length
         << name.length() << " characters long!" << endl;
    cout << line << endl;
    return 0;
}
