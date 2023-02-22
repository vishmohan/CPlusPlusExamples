/*
	Different ways of declaring and initializing a
	C-style array.
	Notice the difference in how array_glob and array1 
	are initialized.
*/

#include <iostream>
using namespace std;

const int NUM_ELEMENTS = 4;

void show(int a[]) {

	for(int i=0; i < NUM_ELEMENTS;++i)
		cout << a[i] << " ";

	cout << endl;
}

//declare a global array with four elements - all four elements are zeros(no garbage elements)
int array_glob[NUM_ELEMENTS];

int main() {

	//declare an array with four elements - all four elements have garbage values in memory
	int array1[NUM_ELEMENTS];

	//declare an array with four elements - all four elements are initialized to zero
	int array2[NUM_ELEMENTS]{};

	//declare an array with four elements - the first element is initialized to 3, the rest are zeros
	int array3[NUM_ELEMENTS]{3};

	//declare an array with four elements - the first element is 3, second is 4, third is 5 and fourth is 6.
	int array4[NUM_ELEMENTS]{3,4,5,6};


	cout << "array1 = " << endl;
	show(array1);
	cout << "array global = " << endl;
	show(array_glob);
	cout << "array2 = " << endl;
	show(array2);
	cout << "array3 = " << endl;
	show(array3);
	cout << "array4 = " << endl;
	show(array4);



	return 0;
}
