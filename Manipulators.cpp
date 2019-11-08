#include <iostream>
using namespace std;
int main()
{
    int y = 123;
    double x = 13.0;
    cout.precision(2); //set the percision for floating point types
    // Precision 2
    cout << uppercase
         // for hex-digits
         << " octal \t\t decimal \t hexadecimal\n "
         << oct << y << " \t\t "
         << dec << y << " \t\t "
         << hex << y << endl;

    cout << " By default:" << x << endl;
    cout << " showpoint and showpos: " << showpoint << showpos << x << endl;
    cout << " fixed: " << fixed
         << x << endl;
    cout << " scientific: " << scientific << x << endl;
    return 0;
}
