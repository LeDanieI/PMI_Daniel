#include "../../../libraries/std_lib_facilities.h"


int main() {
	cout << "Enter seed: \n";
	int seed;
	cin >> seed;
	srand(seed);
	vector<int> password{ randint(9) };
	int bull = 0;
	int cow = 0;

	while (password.size() < 4) {
		int temp_rand = randint(9);	
		bool insert = true;
		for (int i = 0; i < password.size();i++) {
			if (temp_rand == password[i]) {
				insert = false;
			}
		}
		if (insert) {
			password.push_back(temp_rand);
		}
	}

	while (bull != 4) {
		cout << "Enter 4 digits: \n";
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		vector<int> guess{ a,b,c,d };
		cow = 0;
		bull = 0;
		for (int i = 0; i < password.size();i++) {
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