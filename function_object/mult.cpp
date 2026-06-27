#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//functor is a class or struct that overloads the function call operator ()
struct Multiplier {
    private:
        int factor;
    public:
        Multiplier(int n): factor(n) {}
        Multiplier(){
            factor = 0;
        }
        int operator()(int n) const{
            return n* factor;
        }
};

//another functor
template<typename T>
struct square{
        void operator()(T& x) {
            cout <<  x * x << endl;
        }
};

int main() {
    Multiplier mult(5); //initialize mult
    cout << mult(6) << endl; //calls () operator 6*5 = 30
    cout << "===============================" << endl;
    vector<int> v{8,9,10};
    transform(v.begin(),v.end(),v.begin(),mult); //each element is Multiplied by mult
    for(auto e: v) cout << e << endl;
    cout << "===============================" << endl;
    vector<double> v1{4.2,3.4,5.6};
    for_each(v1.begin(),v1.end(),square<double>()); //note the square() creates an unnamed object 
                                            //and for_each invokes the () operator for each element of v1

    return 0;
}
