#include<iostream>
using namespace std;

int main() {
	int row, cel;
	cin >> row >> cel;
	cout << "x|\t";
	for (int i = 0; i <= cel; i++) {
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 0; i <= cel; i++) {
		cout.fill('-');
		cout.width(4);
		cout << "-";
	}
	cout << endl;
	for (int r = 0; r <= row; r++) {
		cout << r << "|\t";
		for (int c = 0; c <= cel; c++) {
			cout << c*r << "\t";
		}
		cout << endl;
	}
	return 0;
}