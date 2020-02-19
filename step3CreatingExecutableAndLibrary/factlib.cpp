#include <iostream>

using namespace std;

int factRecurse(int n) {
	cout << "factorial recurse (" << n << ")" << endl;
	if (n==1)
		return 1;
	return n * factRecurse(n-1);
}