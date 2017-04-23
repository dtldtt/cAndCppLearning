#include<iostream>
using namespace std;
int *growArray(int *oldArray, int &size);
int main() {
	int size = 10;
	int *numArray = new int[size];
	int tmp;
	int i = 0;

	cin >> tmp;
	while (tmp) {
		if (i < size) {
			numArray[i] = tmp;
			i++;
		}
		else {
			numArray = growArray(numArray, size);
			numArray[i] = tmp;
			i++;
		}
		cin >> tmp;
	}
	for (int j=0;j<i;j++)
	{
		cout << numArray[j] << " ";
	}
	delete[] numArray;

	return 0;
}

int* growArray(int *oldArray, int &size) {
	size *= 2;
	int *newArray = new int[size];
	for (int i = 0; i < size / 2; i++) {
		newArray[i] = oldArray[i];
	}
	delete[] oldArray;
	return newArray;
}