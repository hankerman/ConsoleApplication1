#include <iostream>
using namespace std;

void fill(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}
void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}



int main() {
	
	const int size = 10, size2 = 20;
	int arrA[size], arrB[size2], arr1[size + size2], arr2[size], arr3[size], arr4[size], arr5[size];
	int* parrA = arrA;
	int* parrB = arrB;
	int* parr1 = arr1;
	int* parr2 = arr2;
	fill(arrA, size);
	fill(arrB, size2);
	cout << "arrA ";
	print(arrA, size);
	cout << "arrB ";
	print(arrB, size2);
	
	for (int i = 0; i < size; i++) {
		parr1[i] = parrA[i];
	}
	for (int i = 0; i < size2; i++) {
		parr1[i + size] = parrB[i];
	}
	cout << "arr1 - ";
	print(arr1, size + size2);

	for (int i = 0; i < size; i++) {
		int temp = parrA[i];
		for (int j = 0; j < size2; j++) {
			if (temp == parrB[j]) {

			}
		}
	}
	
	print(arr2, size);
	
	return 0;
}