#include <iostream>
#include "factorialConfig.h"

#ifdef USE_REC
#include "factlib.h"
#endif

using namespace std;

int main()
{
	int n;
	cout << "Enter a number:";
	cin>>n;
	
	int ans = 1;
    for(int i=1;i<=n;i++) 
	 ans *=i;
 
	cout << "Factorial of number using iterative method:" << ans << endl;

#ifdef USE_REC
	cout << "Recursion enabled" << endl;
	int recursiveAns = recurseFact(n);
	cout << "Factorial using recursive function:" << recursiveAns << endl;
#else
	cout << "Recursion is NOT enabled" << endl;
#endif
	
	return 0;
}
		 