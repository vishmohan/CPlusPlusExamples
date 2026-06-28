#include <iostream>
using namespace std;

//void swap_elements(int arr[], int k) {
void swap_elements(int* arr, int k) {
	int temp = arr[k];
	arr[k] = arr[k+1];
	arr[k+1] = temp;
    //cout << std::hex << "addr = " << arr << endl;
}

int main() {
	int a[]{1,3,5,7,9,11};

	int num_elements = sizeof(a)/sizeof(int); 

	cout << "array before swap: ";

	for(int i=0; i < num_elements; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	
	cout << "swap elements 2, 3: " << endl; 
	swap_elements(a, 2);

	cout << "array after swap: ";

	for(int i=0; i < num_elements; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
