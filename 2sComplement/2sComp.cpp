#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int x{-6};
	int y{8};
	bitset<32> v1(x);
	bitset<32> v2(y);
	bitset<32> sum(x+y);
	cout << v1 << endl;
	cout << v2 << endl;
	cout <<"-----------------------------------" << endl;
	cout << sum << endl;

	return 0;
}
