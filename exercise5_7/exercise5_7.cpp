#include "../../../libraries/std_lib_facilities.h"

class Bad_abc {};
int calc_D(int a, int b, int c) {
	int	D = pow(b, 2) - 4 * a * c;
	if (D < 0) throw Bad_abc{};
	return D; 
}

int main() 
try {
	cout << "Enter a, b, c: \n";
	int a, b, c;
	cin >> a >> b >> c;
	int D = calc_D(a, b, c);
	cout << "x1: " << ( - b - sqrt(D)) / (2 * a)
		<< "\nx2: " << ( - b + sqrt(D)) / (2 * a);
}
catch (Bad_abc) {
	cout << "D is negative!";
}