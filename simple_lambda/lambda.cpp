#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

const int SIZE = 50;

//the func is a function object which contains different filtering conditions
void filter_vector(const vector<int>& v, std::function<bool(int)> func) {
//void filter_vector(const vector<int>& v, auto func) { //c++20 only
    for(auto e: v) {
        if(func(e))
            cout << e << " ";
    }
    cout << endl;
    cout << "==============================" << endl;
}

//same as filter_vector but implemented with another stateful lambda
void filter_vector1(const vector<int>& v, std::function<bool(int)> func) {

    std::for_each(v.begin(), v.end(), 
                    [&func](int e) {
                        if(func(e))
                            cout << e << " ";
                    }
                 );

    cout << endl;
    cout << "==============================" << endl;
}


int main() {
    vector<int> v;

    for(int i = 0; i < SIZE; ++i)
        v.push_back(i);
    
    //display multiples of 7 in the vector
    filter_vector(v, [](int x) {
                      if(x%7==0) return true;
                      else return false;
                     });

    //display all numbers less than 32
    filter_vector(v, [](int x) { return (x < 32); } );


    //display multiples of 7 in the vector
    filter_vector1(v, [](int x) {
                      if(x%7==0) return true;
                      else return false;
                     });

    //display all numbers less than 32
    filter_vector1(v, [](int x) { return (x < 32); } );


    return 0;
}
