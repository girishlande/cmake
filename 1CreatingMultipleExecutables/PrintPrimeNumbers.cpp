#include <iostream>

using namespace std;

bool isPrime(int n) {
	for(int i=2;i<n;i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}
void printPrimeNumbers(int a, int b) {
	cout << "Prime numbers between " << a << " and " << b << " is: " << endl;
	for(int i=a;i<=b;i++) {
		if (isPrime(i)) {
			cout << i << "  ";
		}
	}
	cout << endl;
}
int main() {
  
  printPrimeNumbers(10,20);
  return 0;
}