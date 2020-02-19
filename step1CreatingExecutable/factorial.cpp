#include <iostream>
using namespace std;

int main() {
	int n;
  cout << "Enter number:";
  cin >> n;
  
  int ans = 1;
  for(int i=1;i<=n;i++) 
    ans *= i;
	
  cout << "factorial of number:" << ans << endl;
 }
	