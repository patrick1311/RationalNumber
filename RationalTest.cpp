
#include <iostream>
#include "RationalNumber.h"
using namespace std;

int main()
{
    //create 5 rational number to test and another object to store result
    //The constructor will give error for object b and initialize denominator to 1
    cout << "Creating 5 different rational numbers and object f to store result: " << endl;
    RationalNumber a(4, 14), b(4, 0), c(4, -14), d(-4, -14), e(2, 3), f;
    cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\nd = " << d << "\ne = " << e <<endl;
    cout << "Testing Rational Number arithmetic in random order: " << endl;
    f = a + b;
    cout << a << " + " << b << " = " << f << endl;
    f = a - c;
    cout << a << " - " << c << " = " << f << endl;
    f = d * e;
    cout << d << " * " << e << " = " << f << endl;
    f = a / b;
    cout << a << " / " << b << " = " << f << endl;
    cout << "Comparing rational numbers a and b: " << endl;
    if(a < b)
        cout << a << " < " << b << endl;
    if(a > b)
        cout << a << " > " << b << endl;
    if(a == b)
        cout << a << " = " << b << endl;
    if(a != b)
        cout << a << " != " << b << endl;
    if(a >= b)
        cout << a << " >= " << b << endl;
    if(a <= b)
        cout << a << " <= " << b << endl;
    
    return 0;
}