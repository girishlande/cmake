#include <iostream>
using namespace std;

// write a program to print nth fibbonacci number
// 1 1 2 3 5 8 13 21 34 55

int fibbonacci(int n) {
	if (n<=1) {
		return n;
	}
	return fibbonacci(n-1) + fibbonacci(n-2);
}

int main() {
	int n;
	cout << "Enter number:";
	cin >> n;
	
	cout << "Fibbonacci at " << n << " is " << fibbonacci(n);
	cout << endl;
}
