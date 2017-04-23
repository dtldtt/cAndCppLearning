#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *Fibonacci = new int[n];
	for (int i = 0; i < n; i++) {
		if (i < 2) {
			Fibonacci[i] = 1;
		}
		else Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
		cout << Fibonacci[i] << "\t";
		if ((i+1)%5==0)
		{
			cout << endl;
		}
	}
	return 0;

}