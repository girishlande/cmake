#include <iostream>
#include "factlib.h"

using namespace std;

int main()
{
	int n;
	cout <<"enter number:";
	cin >> n;
	
	cout << "you entered:" << n <<endl;
	cout << "recursive factorial :" << recurseFact(n) << endl;
	
	return 0;
}
	