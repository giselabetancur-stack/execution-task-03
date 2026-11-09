#include <iostream>
#include <array>
#include <string>
using namespace std;
int main() {
	array<string, 12> paises = {
		"Argentina", "Bolivia", "Brasil", "Chile", "Colombia",
			"Ecuador", "Guyana", "Paraguay", "Peru", "Surinam"
	};
	paises.at(10) = "Uruguay";
	paises[11] = "Venezuela";
	cout << "Todos los paises:" << endl;
	for (int i = 0; i < 12; i++) {
		cout << paises[i] << endl;
	}
	cout << endl << "Paises que inician con C o P:" << endl;
	for (int i = 0; i < 12; i++) {
		if (paises[i][0] == 'C' || paises[i][0] == 'P') {
			cout << paises[i] << endl;
		}
	}
	cout << endl << "Primer elemento: " << paises[0] << endl;
	cout << "Ultimo elemento: " << paises[11] << endl;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11 - i; j++) {
			if (paises[j] > paises[j + 1]) {
				string temp = paises[j];
				paises[j] = paises[j + 1];
				paises[j + 1] = temp;
			}
		}
	}
	cout << endl << "Paises ordenados:" << endl;
	for (int i = 0; i < 12; i++) {
		cout << paises[i] << endl;
	}
	return 0;
}
