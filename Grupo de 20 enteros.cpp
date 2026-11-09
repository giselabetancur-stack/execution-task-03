#include <iostream>
#include <array>
using namespace std;
int main() {
	array<int, 20> arr = {
		21, 27, 33, 39, 45, 34, 35, 36, 37, 38, 41, 40, 42, 43, 44,      
			1, 2, 3, 4, 5                             
	};
	cout << "Todos los elementos:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	cout<<endl;
	cout << endl;
	cout << "Mayores de 20 y menores de 50:" << endl;
	for (int i = 0; i < 20; i++) {
		if (arr[i] > 20 && arr[i] < 50) {
			cout << arr[i] << " ";
		}
	}
	cout<<endl;
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout<<endl;
	cout << "Elementos ordenados:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Indices impares menores de 10:" << endl;
	for (int i = 1; i < 10; i += 2) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}
