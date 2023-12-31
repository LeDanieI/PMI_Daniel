// exercise4_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../libraries/std_lib_facilities.h"

int main()
{
	cout << "Enter sequence of ints: \n";
	vector<int> vec;
	int input;
	while (cin >> input) {
		vec.push_back(input);
	}

	sort(vec);
	int count = 1;
	int current_count = 1;
	int mode = 0;
	for (int i=1; i<vec.size(); i++){
		if (vec[i] == vec[i - 1]) {
			current_count++;
			if (current_count > count) {
				count = current_count;
				mode = vec[i];
			}
		}
		else{
			current_count = 1;

		}
	}
	cout << "Mode is: " << mode << "\n"
		<< "Count is: " << count;

	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
