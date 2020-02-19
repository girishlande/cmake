#include <iostream>
#include "factlib.cpp"

using namespace std;

int main() 
{
  int n;
  cout << "Enter number:";
  cin >> n;  
  
  int ans=1;
  for(int i=2;i<=n;i++)
	ans*=i;

  cout << "Factorial of number is:" << ans << endl;
  
  int recursivefact = factRecurse(n);
  cout << "factorial of number recursive:" << recursivefact << endl;
  return 0;
	  
}
   