#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double n1{2.2};
    double n2{3.3};
    double n3{-4.0};

//1. floor(x) - largest integer <= x
    cout << floor(n1) << " " << floor(n2) << " " << floor(n3) << endl; 

//2. ceil(x) - smallest integer >= x
    cout << ceil(n1) << " " << ceil(n2) << " " << ceil(n3) <<  endl;  

    return 0;
}
