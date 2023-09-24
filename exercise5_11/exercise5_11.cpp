#include "../../../libraries/std_lib_facilities.h"

int main() {
	vector<int> v_fib{ 1, 1, 2 };
	while (v_fib[v_fib.size()-1] == (v_fib[v_fib.size() - 2] + v_fib[v_fib.size() - 3])) {
		v_fib.push_back(v_fib[v_fib.size() - 1] + v_fib[v_fib.size()-2]);
		cout << v_fib[v_fib.size()-1] <<'\n';
	}
	cout << "Last correct int: " << v_fib[v_fib.size() - 1];

}