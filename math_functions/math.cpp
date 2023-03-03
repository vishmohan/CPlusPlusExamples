#include <iostream>
#include <cmath>
using namespace std;

int main() {

//1. abs(x) - absolute value of x
    int n1{5};
    int n2{-7};
    cout << abs(n1) << " " << abs(n2) << endl;

//2. ceil(x) - smallest integer >= x
    double n3{3.2};
    double n4{3.6};
    double n5{-3.2};
    cout << ceil(n3) << " " << ceil(n4) << " " << ceil(n5) << endl;

//3. floor(x) - largest integer <= x
    cout << floor(n3) << " " << floor(n4) << " " << floor(n5) << endl;

//4. sqrt(x) returns sqrt => x must be non-negative
    double n6{47.25};
    cout << "sqrt of " << n6 << " : " << sqrt(n6) << endl;

//5. pow(x,y) returns x^y
    double base{3}, exponent{4};
    cout << base << " ^ " << exponent << " = " << pow(base,exponent) << endl;

//6. Trignometric functions: sin(x), cos(x), tan(x) note: x is in radians
    double angle{M_PI/3} ; //angle = 60 degrees
    cout << "Sin(PI/3) = " << sin(angle) << endl;
    cout << "Cos(PI/3) = " << cos(angle) << endl;
    cout << "Tan(PI/3) = " << tan(angle) << endl;

//7. Logarithms: Natural log/Base 10 log
    int n7{2};
    cout << "Natural ln(2) = " << log(n7) << endl;
    cout << "Base10  log10(2) = " << log10(n7) << endl;

    return 0;
}
