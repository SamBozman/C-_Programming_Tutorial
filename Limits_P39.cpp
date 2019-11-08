#include <iostream>
#include <climits> //http://www.cplusplus.com/reference/climits/
using namespace std;
// Definition of INT_MIN, ...

int main()
{
     cout << "Range of types int and unsigned int"
          << endl
          << endl;
     cout << "Type        Minimum         Maximum" << endl
          << "--------------------------------------------"
          << endl;

     cout << "int" << INT_MIN << "   " //negative value of a signed int
          << INT_MAX << endl;          //positive value of a signed int

     cout << "unsigned int "
          << " 0 "             //low end value of a unsigned int
          << UINT_MAX << endl; //high end (positive) value of a unsigned int

     cout << "Size of"
          << " int = "
          << sizeof(int) << " bytes" << endl; //How may bytes does a type use

     return 0;
}
