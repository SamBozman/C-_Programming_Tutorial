// Circumference and area of a circle with radius 2.5
#include <iostream>
using namespace std;

//const double pi = 3.141593;
const double pi(3.141593); //Variables may also be initialized like this

int main()
{
    double area, circuit, radius = 1.5;
    area = pi * radius * radius;
    circuit = 2 * pi * radius;

    //By default cout outputs a floating-point number
    //with a maximum of 6 decimal places without trailing zeros.

    cout << "\nTo Evaluate a Circle\n"
         << endl;
    cout << "Radius   " << radius << endl
         << "Circumference: " << circuit << endl
         << "Area:" << area << endl;
    return 0;
}
