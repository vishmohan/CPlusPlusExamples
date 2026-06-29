#include <iostream>
#include <vector>
#include<algorithm>
#include<random>
using namespace std;

int main(){
    //to generate random numbers first generate the seed to initialize the engine
    std::random_device rd;
    //seed the engine
    std::mt19937 gen(rd()); //mt19937 is the engine used, it is seeded with rd
    //want a uniform distribution of numbers between min and max 1,50
    std::uniform_int_distribution<int> uni{1,50};

    vector<int> v;
    vector<int> result;
    int divisor{3};
    for(int i=0; i < 50; ++i) {
        auto val = uni(gen);
        v.push_back(val);
    }

    auto l = [divisor](int x) { return(x % divisor == 0); };
    cout << "original list: " << endl;
    std::for_each(v.begin(),v.end(),[](int x) {cout << x << " ";});
    cout << endl;
    cout << "filtered list: " << endl;
    std::copy_if(v.begin(),v.end(),back_inserter(result),l);
    std::for_each(result.begin(),end(result),[](int x) {cout << x << " ";});
    cout << endl;

        return 0;
}
