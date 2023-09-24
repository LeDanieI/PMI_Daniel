#include "../../../libraries/std_lib_facilities.h"

int main() {
	int bull = 0;
	int cow = 0;
	vector<int> password{ 4,2,6,7 };

	while (bull != 4) {
		cout << "Enter 4 digits: \n";
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		vector<int> guess{ a,b,c,d };
		cow = 0;
		bull = 0;
		for (int i=0; i < password.size();i++) {
			for (int j = 0; j < guess.size();j++) {
				if (password[i] == guess[j] && i == j) {
					bull++;
				}
				else if (password[i] == guess[j] && i != j) {
					cow++;
				}
			}
		}
		cout << bull << " bulls and " << cow << " cows!\n";
	}
	cout << "Well done!\n";
}