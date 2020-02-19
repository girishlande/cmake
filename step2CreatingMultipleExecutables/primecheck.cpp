#include<iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter number:";
  cin >> n;
  
  bool flag = true;
  
  for(int i=2;i<n;i++) {
	  if (n%i==0) {
		  flag = false;
		  break;
	  }
  }
  
  if (flag) 
	  cout << "PRIME NUMBER" << endl;
  else 
	  cout << "NOT PRIME NUMBER" << endl;
  
  return 0;
}

	  
		  
	  
  