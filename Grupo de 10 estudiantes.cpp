#include <iostream>
#include <array>
#include <string>
#include <iostream>
#include <array>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct Estudiante {
	string nombre;
	int nacimiento;
	double gpa;
};
int main() {
	array<Estudiante, 10> est = {
		Estudiante{"Juan", 2000, 3.4},
			Estudiante{"Maria", 2005, 2.8}
	};
	for (int i = 2; i < 4; i++) {
		cout << "Estudiante " << i + 1 << endl;
		cout << "Nombre: ";
		cin >> est[i].nombre;
		cout << "Anio de nacimiento: ";
		cin >> est[i].nacimiento;
		cout << "GPA: ";
		cin >> est[i].gpa;
	}
	string nombres[3] = {"Gaby", "Patty", "Diana"};
	int nacimientos[3] = {2002, 2004, 2006};
	double gps[3] = {3.8, 3.0, 2.9};
	
	for (int i = 0; i < 3; i++) {
		est[4 + i].nombre = nombres[i];
		est[4 + i].nacimiento = nacimientos[i];
		est[4 + i].gpa = gps[i];
	}
	ifstream archivo("datosEstudiantes.txt");
	for (int i = 7; i < 10; i++) {
		archivo >> est[i].nombre >> est[i].nacimiento >> est[i].gpa;
	}
	archivo.close();
	cout << endl << "Lista de estudiantes:" << endl;
	cout << left << setw(12) << "Nombre" << setw(12) << "Nacimiento"
		<< setw(6) << "GPA" << setw(6) << "Edad" << "Beca" << endl;
	for (int i = 0; i < 10; i++) {
		cout << left << setw(12) << est[i].nombre
			<< setw(12) << est[i].nacimiento
			<< setw(6) << est[i].gpa
			<< setw(6) << 2026 - est[i].nacimiento;
		if (est[i].gpa >= 3.5) {
			cout << "Califica a beca" << endl;
		} else {
			cout << "No califica a beca" << endl;
		}
	}
	return 0;
}
