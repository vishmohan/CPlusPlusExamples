#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int f1(int x, int y) {
	return x-y;
}

int f2(int x, int y) {
	return y/x;
}

int main() {

	vector<int> v1{1,2,3,4};
	vector<int> scale{10,20,30,40};
	int initial{10};

	//ans = sum(v1[i] * v2[i]) + initial
	auto ans = std::inner_product(v1.begin(),v1.end(),scale.begin(),initial);
	cout << ans << endl;

	//ans1 = f1(initial, sum(f2(v1[i],v2[i])))
	auto ans1 = std::inner_product(v1.begin(),v1.end(),scale.begin(),initial,f1
																,f2);
	cout << ans1 << endl;

	return 0;
}
