// drill4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../../../libraries/std_lib_facilities.h"

int main()
{	
	cout << "Enter some distances: \n";
	vector<double> distances;
	double distance;
	while (cin >> distance) {
		distances.push_back(distance);
	}
	double sum = 0;
	for (int x : distances) {
		sum += x;
	}
	sort(distances);
	cout << "\nTotal distance: " << sum
		<< "\nSmallest distance: " << distances[0]
		<< "\nLargest distance: " << distances[distances.size() - 1]
		<< "\nMean distance: " << sum / distances.size();

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
